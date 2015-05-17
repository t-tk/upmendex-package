extern FILE *efp;

extern int lines,idxcount,acc,reject;
extern int prange,fsti,lorder,bcomp,force,fpage,gflg,verb,debug;
extern int warn,scount,pattr[3];

extern struct index *ind;

#define STYBUFSIZE 2048

extern char keyword[STYBUFSIZE];
extern char arg_open,arg_close;
extern char range_open,range_close;
extern char level,actual,encap,quote,escape;
extern char preamble[STYBUFSIZE],postamble[STYBUFSIZE];
extern char setpage_prefix[STYBUFSIZE],setpage_suffix[STYBUFSIZE];
extern char group_skip[STYBUFSIZE];
extern char lethead_prefix[STYBUFSIZE],lethead_suffix[STYBUFSIZE];
extern int lethead_flag;
extern char item_0[STYBUFSIZE],item_1[STYBUFSIZE],item_2[STYBUFSIZE];
extern char item_01[STYBUFSIZE],item_x1[STYBUFSIZE],item_12[STYBUFSIZE],item_x2[STYBUFSIZE];
extern char delim_0[STYBUFSIZE],delim_1[STYBUFSIZE],delim_2[STYBUFSIZE],delim_n[STYBUFSIZE],delim_r[STYBUFSIZE],delim_t[STYBUFSIZE];
extern char suffix_2p[STYBUFSIZE],suffix_3p[STYBUFSIZE],suffix_mp[STYBUFSIZE];
extern char encap_prefix[STYBUFSIZE],encap_infix[STYBUFSIZE],encap_suffix[STYBUFSIZE];
extern int line_max;
extern char indent_space[STYBUFSIZE];
extern int indent_length;
extern int priority;
extern char symbol[STYBUFSIZE];
extern char symhead_positive[STYBUFSIZE],symhead_negative[STYBUFSIZE];
extern char numhead_positive[STYBUFSIZE],numhead_negative[STYBUFSIZE];
extern int symbol_flag;
extern int letter_head;
extern UChar atama[STYBUFSIZE],tumunja[STYBUFSIZE];
extern char page_compositor[STYBUFSIZE],page_precedence[STYBUFSIZE];
extern char character_order[STYBUFSIZE];
extern char icu_locale[STYBUFSIZE];
