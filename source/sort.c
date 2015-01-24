#include "mendex.h"
#include "qsort.h"

#include "exkana.h"
#include "exvar.h"

#include <unicode/ucol.h>

int sym,nmbr,ltn,kana,cyr,grk;

static int wcomp(const void *p, const void *q);
static int pcomp(const void *p, const void *q);
static int ordering(UChar c);
static int charset(UChar c);
UCollator * collator  = 0;

/*   sort index   */
void wsort(struct index *ind, int num)
{
	int i,order;
	UErrorCode status = U_ZERO_ERROR;

	for (order=1,i=0;;i++) {
		switch (character_order[i]) {
		case '\0':
			goto BREAK;
			break;

		case 'S':
			sym=order++;
			break;

		case 'N':
			nmbr=order++;
			break;

		case 'L':
			ltn=order++;
			break;

		case 'J':
			kana=order++;
			break;

		case 'C':
			cyr=order++;
			break;

		case 'G':
			grk=order++;
			break;

		default:
			break;
		}
	}

BREAK:

	if (sym==0) sym=order++;
	if (nmbr==0) nmbr=order++;
	if (ltn==0) ltn=order++;
	if (kana==0) kana=order++;
	if (cyr==0) cyr=order++;
	if (grk==0) grk=order++;

	collator = ucol_open("en_US", &status);
	qsort(ind,num,sizeof(struct index),wcomp);
}

/*   compare for sorting index   */
static int wcomp(const void *p, const void *q)
{
	int i, j, k, l, len1, len2;
	const struct index *index1 = p, *index2 = q;
	UChar ch1, ch2;
	UChar *str1, *str2;
	UCollationResult col_result;

	scount++;

	for (j=0;j<3;j++) {

/*   check level   */
		if (((*index1).words==j)&&((*index2).words!=j)) return -1;
		else if (((*index1).words!=j)&&((*index2).words==j)) return 1;

		i=0;

		for(;;) {

			str1=&((*index1).dic[j][i]);
			str2=&((*index2).dic[j][i]);
			ch1=(*index1).dic[j][i];
			ch2=(*index2).dic[j][i];

/*   even   */
			if ((ch1==L'\0')&&(ch2==L'\0')) break;

/*   index1 is shorter   */
			if (ch1==L'\0') return -1;

/*   index2 is shorter   */
			if (ch2==L'\0') return 1;

			for(k=0;;k++) {
				if (str1[k]==L'\0') {
					len1=k;
					break;
				}
				if (k=0) continue;
				if (charset(str1[k-1])!=charset(str1[k])) {
					if (is_comb_diacritical_mark(str1[k])) {
						continue;
					}
					len1=k-1;
					break;
				}
			}
			for(k=0;;k++) {
				if (str2[k]==L'\0') {
					len2=k;
					break;
				}
				if (k=0) continue;
				if (charset(str2[k-1])!=charset(str2[k])) {
					if (is_comb_diacritical_mark(str2[k])) {
						continue;
					}
					len2=k-1;
					break;
				}
			}

#if 0
/*   priority   */
			if ((priority!=0)&&(i>0)) {
				if ((japanese(ch1))
					&&(!japanese(ch2)))
						return -1;

				if ((japanese(ch2))
					&&(!japanese(ch1)))
					return 1;
			}
#endif

/*   compare group   */
			if (ordering(ch1)<ordering(ch2))
				return -1;

			if (ordering(ch1)>ordering(ch2))
				return 1;

/*   simple compare   */
			col_result = ucol_strcoll(collator, str1, len1, str2, len2);
			if (col_result == UCOL_LESS) return -1;
			else if (col_result == UCOL_GREATER) return 1;

			i+=len1;
		}

/*   compare index   */
		for (i=0;;i++) {
			ch1=(*index1).idx[j][i];
			ch2=(*index2).idx[j][i];
			if ((ch1==L'\0')&&(ch2==L'\0')) break;
			else if (ch1==L'\0') return -1;
			else if (ch2==L'\0') return 1;
			else if (ch1<ch2) return -1;
			else if (ch1>ch2) return 1;
		}
	}
	return 0;
}

/*   sort page   */
void pagesort(struct index *ind, int num)
{
	int i,j;
	struct page *buff;

	for (i=0;i<num;i++) {
		if (ind[i].num==0) continue;

		buff=xmalloc(sizeof(struct page)*(ind[i].num+1));
		for (j=0;j<=ind[i].num;j++) {
			buff[j]=ind[i].p[j];
		}
		qsort(buff,ind[i].num+1,sizeof(struct page),pcomp);
		for (j=0;j<=ind[i].num;j++) {
			ind[i].p[j]=buff[j];
		}
		free(buff);
	}
}

/*   compare for sorting page   */
static int pcomp(const void *p, const void *q)
{
	int i,j,cc=0,num1,num2;
	char buff[16];
	const struct page *page1 = p, *page2 = q;

	scount++;

	for (i=0;i<3;i++) {
		if ((page1->attr[i]<0)&&(page2->attr[i]<0)) return 0;
		else if ((page1->attr[i]<0)&&(page2->attr[i]>=0)) return -1;
		else if ((page2->attr[i]<0)&&(page1->attr[i]>=0)) return 1;

		if (page1->attr[i]>page2->attr[i]) return 1;
		if (page1->attr[i]<page2->attr[i]) return -1;

		for (j=cc;j<strlen(page1->page);j++) {
			if (strncmp(&page1->page[j],page_compositor,strlen(page_compositor))==0) break;
		}
		strncpy(buff,&page1->page[cc],j-cc);
		buff[j-cc]='\0';
		num1=pnumconv(buff,page1->attr[i]);

		for (j=cc;j<strlen(page2->page);j++) {
			if (strncmp(&page2->page[j],page_compositor,strlen(page_compositor))==0) break;
		}
		strncpy(buff,&page2->page[cc],j-cc);
		buff[j-cc]='\0';
		num2=pnumconv(buff,page2->attr[i]);

		if (num1>num2) return 1;
		else if (num1<num2) return -1;

		if (page1->enc[0]=='(' || page2->enc[0]==')') return -1;
		if (page1->enc[0]==')' || page2->enc[0]=='(') return 1;

		cc=j+strlen(page_compositor);
	}

	return 0;
}

static int ordering(UChar c)
{
	if (c<0x80) {
		if (is_latin(c)) return ltn;
		else if (is_numeric(c)) return nmbr;
		else return sym;
	}
	else {
		if (is_latin(c)) return ltn;
		else if (is_jpn_kana(c)) return kana;
		else if (is_cyrillic(c)) return cyr;
		else if (is_greek(c))    return grk;
		else return sym;
	}
}

static int charset(UChar c)
{
	if (c==0x00) return CH_UNKNOWN;
	else if (c<0x80) {
		if (is_latin(c)) return CH_LATIN;
		else if (is_numeric(c)) return CH_NUMERIC;
		else return CH_SYMBOL;
	}
	else {
		if (is_latin(c)) return CH_LATIN;
		else if (is_jpn_kana(c)) return CH_KANA;
		else if (is_cyrillic(c)) return CH_CYRILLIC;
		else if (is_greek(c))    return CH_GREEK;
		else return CH_SYMBOL;
	}
}

int is_alphanumeric(UChar c)
{
	if (((c>=L'A')&&(c<=L'Z'))||((c>=L'a')&&(c<=L'z'))||((c>=L'0')&&(c<=L'9')))
		return 1;
	else return 0;
}

int is_latin(UChar c)
{
	if (((c>=L'A')&&(c<=L'Z'))||((c>=L'a')&&(c<=L'z'))) return 1;
	else if ((c>=0x00C0)&&(c<=0x00D6)) return 1; /* Latin-1 Supplement */
	else if ((c>=0x00D8)&&(c<=0x00F6)) return 1;
	else if ((c>=0x00F8)&&(c<=0x00FF)) return 1;
	else if ((c>=0x0100)&&(c<=0x024F)) return 1; /* Latin Extended-A,B */
	else if ((c>=0x2C60)&&(c<=0x2C7F)) return 1; /* Latin Extended-C */
	else if ((c>=0xA720)&&(c<=0xA7FF)) return 1; /* Latin Extended-D */
	else if ((c>=0xAB30)&&(c<=0xAB6F)) return 1; /* Latin Extended-E */
	else if ((c>=0x1E00)&&(c<=0x1EFF)) return 1; /* Latin Extended Additional */
	else if ((c>=0xFB00)&&(c<=0xFB06)) return 1; /* Latin ligatures */
	else return 0;
}

int is_numeric(UChar c)
{
	if ((c>=L'0')&&(c<=L'9')) return 1;
	else return 0;
}

int is_jpn_kana(UChar c)
{
	if      ((c>=0x3040)&&(c<=0x30FF)) return 1; /* Hiragana, Katakana */
	else return 0;
}

int is_cyrillic(UChar c)
{
	if      ((c>=0x0400)&&(c<=0x052F)) return 1; /* Cyrillic, Cyrillic Supplement */
	else if ((c>=0x2DE0)&&(c<=0x2DFF)) return 1; /* Cyrillic Extended-A */
	else if ((c>=0xA640)&&(c<=0xA69F)) return 1; /* Cyrillic Extended-B */
	else return 0;
}

int is_greek(UChar c)
{
	if      ((c>=0x0370)&&(c<=0x03FF)) return 1; /* Greek */
	else if ((c>=0x1F00)&&(c<=0x1FFF)) return 1; /* Greek Extended */
	else return 0;
}

int is_comb_diacritical_mark(UChar c)
{
	if      ((c>=0x0300)&&(c<=0x036F)) return 1; /* Combining Diacritical Marks */
	else if ((c>=0x1DC0)&&(c<=0x1DFF)) return 1; /* Combining Diacritical Marks Supplement */
	else if ((c>=0x1AB0)&&(c<=0x1AFF)) return 1; /* Combining Diacritical Marks Extended */
	else if ((c>=0x3099)&&(c<=0x309A)) return 1; /* Combining Kana Voiced Sound Marks */
	else return 0;
}

int chkcontinue(struct page *p, int num)
{
	int i,j,cc=0,num1,num2;
	char buff[16];

	for (i=0;i<3;i++) {
		if ((p[num].attr[i]<0)&&(p[num+1].attr[i]<0)) return 1;
		else if (p[num].attr[i]!=p[num+1].attr[i]) return 0;

		for (j=cc;j<strlen(p[num].page);j++) {
			if (strncmp(&p[num].page[j],page_compositor,strlen(page_compositor))==0) break;
		}
		strncpy(buff,&p[num].page[cc],j);
		buff[j]='\0';
		num1=pnumconv(buff,p[num].attr[i]);

		for (j=cc;j<strlen(p[num+1].page);j++) {
			if (strncmp(&p[num+1].page[j],page_compositor,strlen(page_compositor))==0) break;
		}
		strncpy(buff,&p[num+1].page[cc],j);
		buff[j]='\0';
		num2=pnumconv(buff,p[num+1].attr[i]);

		if (num1==num2 || num1+1==num2) {
			if (i==2) return 1;
			if ((p[num].attr[i+1]<0)&&(p[num+1].attr[i+1]<0)) return 1;
			else return 0;
		}
		else if (num1!=num2) return 0;

		cc=j+strlen(page_compositor);
	}

	return 1;
}
