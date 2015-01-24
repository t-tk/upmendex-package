extern UChar AKASATANA[];
extern UChar *akasatana;
extern UChar AIUEO[];
extern UChar *aiueo;
extern UChar kanatable[];

extern UChar SPACE;
extern UChar ALPHATOP;
extern UChar ALPHAEND;
extern UChar YENSIGN;
extern UChar HIRATOP;
extern UChar HIRAEND;
extern UChar KATATOP;
extern UChar KATAEND;

#define is_katakana(a)  ((a)>=KATATOP && (a)<=KATAEND)
#define is_hiragana(a)  ((a)>=HIRATOP && (a)<=HIRAEND)
