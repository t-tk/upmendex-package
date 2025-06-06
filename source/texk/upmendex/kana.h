#include "exkana.h"

UChar AKASATANA[]={
	0x3042, /* あ */
	0x304b, /* か */
	0x3055, /* さ */
	0x305f, /* た */
	0x306a, /* な */
	0x306f, /* は */
	0x307e, /* ま */
	0x3084, /* や */
	0x3089, /* ら */
	0x308f, /* わ */
	0
};
char AKASATANAutf8[]={
	0xe3,0x81,0x82, /* あ */
	0xe3,0x81,0x8b, /* か */
	0xe3,0x81,0x95, /* さ */
	0xe3,0x81,0x9f, /* た */
	0xe3,0x81,0xaa, /* な */
	0xe3,0x81,0xaf, /* は */
	0xe3,0x81,0xbe, /* ま */
	0xe3,0x82,0x84, /* や */
	0xe3,0x82,0x89, /* ら */
	0xe3,0x82,0x8f, /* わ */
	0
};
UChar *akasatana;

UChar AIUEO[]={
	0x3042, /* あ */
	0x3044, /* い */
	0x3046, /* う */
	0x3048, /* え */
	0x304a, /* お */
	0x304b, /* か */
	0x304d, /* き */
	0x304f, /* く */
	0x3051, /* け */
	0x3053, /* こ */
	0x3055, /* さ */
	0x3057, /* し */
	0x3059, /* す */
	0x305b, /* せ */
	0x305d, /* そ */
	0x305f, /* た */
	0x3061, /* ち */
	0x3064, /* つ */
	0x3066, /* て */
	0x3068, /* と */
	0x306a, /* な */
	0x306b, /* に */
	0x306c, /* ぬ */
	0x306d, /* ね */
	0x306e, /* の */
	0x306f, /* は */
	0x3072, /* ひ */
	0x3075, /* ふ */
	0x3078, /* へ */
	0x307b, /* ほ */
	0x307e, /* ま */
	0x307f, /* み */
	0x3080, /* む */
	0x3081, /* め */
	0x3082, /* も */
	0x3084, /* や */
	0xd82c, 0xdd20, /* U+1B120 Katakana Letter Archaic YI  𛄠 */
	0x3086, /* ゆ */
	0xd82c, 0xdd21, /* U+1B121 Katakana Letter Archaic YE  𛄡 */
	0x3088, /* よ */
	0x3089, /* ら */
	0x308a, /* り */
	0x308b, /* る */
	0x308c, /* れ */
	0x308d, /* ろ */
	0x308f, /* わ */
	0x3090, /* ゐ */
	0xd82c, 0xdd1f, /* U+1B11F Hiragana Letter Archaic WU  𛄟 */
	0x3091, /* ゑ */
	0x3092, /* を */
	0x3093, /* ん */
	0
};
UChar *aiueo;
UChar kanatable[]={
	0x3042, /* あ */
	0x3042, /* あ */
	0x3044, /* い */
	0x3044, /* い */
	0x3046, /* う */
	0x3046, /* う */
	0x3048, /* え */
	0x3048, /* え */
	0x304a, /* お */
	0x304a, /* お */
	0x304b, /* か */
	0x304b, /* か */
	0x304d, /* き */
	0x304d, /* き */
	0x304f, /* く */
	0x304f, /* く */
	0x3051, /* け */
	0x3051, /* け */
	0x3053, /* こ */
	0x3053, /* こ */
	0x3055, /* さ */
	0x3055, /* さ */
	0x3057, /* し */
	0x3057, /* し */
	0x3059, /* す */
	0x3059, /* す */
	0x305b, /* せ */
	0x305b, /* せ */
	0x305d, /* そ */
	0x305d, /* そ */
	0x305f, /* た */
	0x305f, /* た */
	0x3061, /* ち */
	0x3061, /* ち */
	0x3064, /* つ */
	0x3064, /* つ */
	0x3064, /* つ */
	0x3066, /* て */
	0x3066, /* て */
	0x3068, /* と */
	0x3068, /* と */
	0x306a, /* な */
	0x306b, /* に */
	0x306c, /* ぬ */
	0x306d, /* ね */
	0x306e, /* の */
	0x306f, /* は */
	0x306f, /* は */
	0x306f, /* は */
	0x3072, /* ひ */
	0x3072, /* ひ */
	0x3072, /* ひ */
	0x3075, /* ふ */
	0x3075, /* ふ */
	0x3075, /* ふ */
	0x3078, /* へ */
	0x3078, /* へ */
	0x3078, /* へ */
	0x307b, /* ほ */
	0x307b, /* ほ */
	0x307b, /* ほ */
	0x307e, /* ま */
	0x307f, /* み */
	0x3080, /* む */
	0x3081, /* め */
	0x3082, /* も */
	0x3084, /* や */
	0x3084, /* や */
	0x3086, /* ゆ */
	0x3086, /* ゆ */
	0x3088, /* よ */
	0x3088, /* よ */
	0x3089, /* ら */
	0x308a, /* り */
	0x308b, /* る */
	0x308c, /* れ */
	0x308d, /* ろ */
	0x308f, /* わ */
	0x308f, /* わ */
	0x3090, /* ゐ */
	0x3091, /* ゑ */
	0x3092, /* を */
	0x3093, /* ん */
	0x3046, /* う */
	0x304b, /* か */
	0x3051, /* け */
	0x308f, /* わ */
	0x3090, /* ゐ */
	0x3091, /* ゑ */
	0x3092, /* を */
	0
};
UChar extkanatable[]={
	0x304f, /* く */
	0x3057, /* し */
	0x3059, /* す */
	0x3068, /* と */
	0x306c, /* ぬ */
	0x306f, /* は */
	0x3072, /* ひ */
	0x3075, /* ふ */
	0x3078, /* へ */
	0x307b, /* ほ */
	0x3080, /* む */
	0x3089, /* ら */
	0x308a, /* り */
	0x308b, /* る */
	0x308c, /* れ */
	0x308d, /* ろ */
	0
};
int kana_ye_mode=0;


UChar GANADA[]={
	0x3131, /* ㄱ (Hangul Compatibility Jamo) */
	0x3134, /* ㄴ */
	0x3137, /* ㄷ */
	0x3139, /* ㄹ */
	0x3141, /* ㅁ */
	0x3142, /* ㅂ */
	0x3145, /* ㅅ */
	0x3147, /* ㅇ */
	0x3148, /* ㅈ */
	0x314A, /* ㅊ */
	0x314B, /* ㅋ */
	0x314C, /* ㅌ */
	0x314D, /* ㅍ */
	0x314E, /* ㅎ */
	0
};


/* Devanagari */
UChar DEVA_HEAD[]={
	/* Independent vowels */
	0x0904, /* ऄ */
	0x0905, /* अ */
	0x0906, /* आ */
	0x0907, /* इ */
	0x0908, /* ई */
	0x0909, /* उ */
	0x090A, /* ऊ */
	0x090B, /* ऋ */
	0x090C, /* ऌ */
	0x090D, /* ऍ */
	0x090E, /* ऎ */
	0x090F, /* ए */
	0x0910, /* ऐ */
	0x0911, /* ऑ */
	0x0912, /* ऒ */
	0x0913, /* ओ */
	0x0914, /* औ */
	/* Consonants */
	0x0915, /* क */
	0x0916, /* ख */
	0x0917, /* ग */
	0x0918, /* घ */
	0x0919, /* ङ */
	0x091A, /* च */
	0x091B, /* छ */
	0x091C, /* ज */
	0x091D, /* झ */
	0x091E, /* ञ */
	0x091F, /* ट */
	0x0920, /* ठ */
	0x0921, /* ड */
	0x0922, /* ढ */
	0x0923, /* ण */
	0x0924, /* त */
	0x0925, /* थ */
	0x0926, /* द */
	0x0927, /* ध */
	0x0928, /* न */
	0x092A, /* प */
	0x092B, /* फ */
	0x092C, /* ब */
	0x092D, /* भ */
	0x092E, /* म */
	0x092F, /* य */
	0x0930, /* र */
	0x0932, /* ल */
	0x0933, /* ळ */
	0x0935, /* व */
	0x0936, /* श */
	0x0937, /* ष */
	0x0938, /* स */
	0x0939, /* ह */
	0
};

/* Bengali (Bangla) */
UChar BENG_HEAD[]={
	/* Independent vowels */
	0x0985, /* অ */
	0x0986, /* আ */
	0x0987, /* ই */
	0x0988, /* ঈ */
	0x0989, /* উ */
	0x098A, /* ঊ */
	0x098B, /* ঋ */
	0x098C, /* ঌ */
	0x098F, /* এ */
	0x0990, /* ঐ */
	0x0993, /* ও */
	0x0994, /* ঔ */
	/* Consonants */
	0x0995, /* ক */
	0x0996, /* খ */
	0x0997, /* গ */
	0x0998, /* ঘ */
	0x0999, /* ঙ */
	0x099A, /* চ */
	0x099B, /* ছ */
	0x099C, /* জ */
	0x099D, /* ঝ */
	0x099E, /* ঞ */
	0x099F, /* ট */
	0x09A0, /* ঠ */
	0x09A1, /* ড */
	0x09A2, /* ঢ */
	0x09A3, /* ণ */
	0x09A4, /* ত */
	0x09A5, /* থ */
	0x09A6, /* দ */
	0x09A7, /* ধ */
	0x09A8, /* ন */
	0x09AA, /* প */
	0x09AB, /* ফ */
	0x09AC, /* ব */
	0x09AD, /* ভ */
	0x09AE, /* ম */
	0x09AF, /* য */
	0x09B0, /* র */
	0x09B2, /* ল */
	0x09B6, /* শ */
	0x09B7, /* ষ */
	0x09B8, /* স */
	0x09B9, /* হ */
	0
};

/* Gurmukhi (Punjabi) */
UChar GURU_HEAD[]={
	/* Independent vowels */
	0x0A09, /* ਉ */
	0x0A0A, /* ਊ */
	0x0A13, /* ਓ */
	0x0A05, /* ਅ */
	0x0A06, /* ਆ */
	0x0A10, /* ਐ */
	0x0A14, /* ਔ */
	0x0A07, /* ਇ */
	0x0A08, /* ਈ */
	0x0A0F, /* ਏ */
	/* Consonants */
	0x0A38, /* ਸ */
	0x0A39, /* ਹ */
	0x0A15, /* ਕ */
	0x0A16, /* ਖ */
	0x0A17, /* ਗ */
	0x0A18, /* ਘ */
	0x0A19, /* ਙ */
	0x0A1A, /* ਚ */
	0x0A1B, /* ਛ */
	0x0A1C, /* ਜ */
	0x0A1D, /* ਝ */
	0x0A1E, /* ਞ */
	0x0A1F, /* ਟ */
	0x0A20, /* ਠ */
	0x0A21, /* ਡ */
	0x0A22, /* ਢ */
	0x0A23, /* ਣ */
	0x0A24, /* ਤ */
	0x0A25, /* ਥ */
	0x0A26, /* ਦ */
	0x0A27, /* ਧ */
	0x0A28, /* ਨ */
	0x0A2A, /* ਪ */
	0x0A2B, /* ਫ */
	0x0A2C, /* ਬ */
	0x0A2D, /* ਭ */
	0x0A2E, /* ਮ */
	0x0A2F, /* ਯ */
	0x0A30, /* ਰ */
	0x0A32, /* ਲ */
	0x0A35, /* ਵ */
	0x0A5C, /* ੜ */
	0
};

/* Gujarati */
UChar GUJR_HEAD[]={
	/* Independent vowels */
	0x0A85, /* અ */
	0x0A86, /* આ */
	0x0A87, /* ઇ */
	0x0A88, /* ઈ */
	0x0A89, /* ઉ */
	0x0A8A, /* ઊ */
	0x0A8B, /* ઋ */
	0x0A8C, /* ઌ */
	0x0A8D, /* ઍ */
	0x0A8F, /* એ */
	0x0A90, /* ઐ */
	0x0A91, /* ઑ */
	0x0A93, /* ઓ */
	0x0A94, /* ઔ */
	/* Consonants */
	0x0A95, /* ક */
	0x0A96, /* ખ */
	0x0A97, /* ગ */
	0x0A98, /* ઘ */
	0x0A99, /* ઙ */
	0x0A9A, /* ચ */
	0x0A9B, /* છ */
	0x0A9C, /* જ */
	0x0A9D, /* ઝ */
	0x0A9E, /* ઞ */
	0x0A9F, /* ટ */
	0x0AA0, /* ઠ */
	0x0AA1, /* ડ */
	0x0AA2, /* ઢ */
	0x0AA3, /* ણ */
	0x0AA4, /* ત */
	0x0AA5, /* થ */
	0x0AA6, /* દ */
	0x0AA7, /* ધ */
	0x0AA8, /* ન */
	0x0AAA, /* પ */
	0x0AAB, /* ફ */
	0x0AAC, /* બ */
	0x0AAD, /* ભ */
	0x0AAE, /* મ */
	0x0AAF, /* ય */
	0x0AB0, /* ર */
	0x0AB2, /* લ */
	0x0AB5, /* વ */
	0x0AB6, /* શ */
	0x0AB7, /* ષ */
	0x0AB8, /* સ */
	0x0AB9, /* હ */
	0x0AB3, /* ળ */
	0
};

/* Oriya (Odia) */
UChar ORYA_HEAD[]={
	/* Independent vowels */
	0x0B05, /* ଅ */
	0x0B06, /* ଆ */
	0x0B07, /* ଇ */
	0x0B08, /* ଈ */
	0x0B09, /* ଉ */
	0x0B0A, /* ଊ */
	0x0B0B, /* ଋ */
	0x0B0C, /* ଌ */
	0x0B0F, /* ଏ */
	0x0B10, /* ଐ */
	0x0B13, /* ଓ */
	0x0B14, /* ଔ */
	/* Consonants */
	0x0B15, /* କ */
	0x0B16, /* ଖ */
	0x0B17, /* ଗ */
	0x0B18, /* ଘ */
	0x0B19, /* ଙ */
	0x0B1A, /* ଚ */
	0x0B1B, /* ଛ */
	0x0B1C, /* ଜ */
	0x0B1D, /* ଝ */
	0x0B1E, /* ଞ */
	0x0B1F, /* ଟ */
	0x0B20, /* ଠ */
	0x0B21, /* ଡ */
	0x0B22, /* ଢ */
	0x0B23, /* ଣ */
	0x0B24, /* ତ */
	0x0B25, /* ଥ */
	0x0B26, /* ଦ */
	0x0B27, /* ଧ */
	0x0B28, /* ନ */
	0x0B2A, /* ପ */
	0x0B2B, /* ଫ */
	0x0B2C, /* ବ */
	0x0B2D, /* ଭ */
	0x0B2E, /* ମ */
	0x0B2F, /* ଯ */
	0x0B30, /* ର */
	0x0B32, /* ଲ */
	0x0B33, /* ଳ */
	0x0B35, /* ଵ */
	0x0B71, /* ୱ */
	0x0B36, /* ଶ */
	0x0B37, /* ଷ */
	0x0B38, /* ସ */
	0x0B39, /* ହ */
	0
};

/* Tamil */
UChar TAML_HEAD[]={
	/* Independent vowels */
	0x0B85, /* அ */
	0x0B86, /* ஆ */
	0x0B87, /* இ */
	0x0B88, /* ஈ */
	0x0B89, /* உ */
	0x0B8A, /* ஊ */
	0x0B8E, /* எ */
	0x0B8F, /* ஏ */
	0x0B90, /* ஐ */
	0x0B92, /* ஒ */
	0x0B93, /* ஓ */
	/* Consonants */
	0x0B95, /* க */
	0x0B99, /* ங */
	0x0B9A, /* ச */
	0x0B9E, /* ஞ */
	0x0B9F, /* ட */
	0x0BA3, /* ண */
	0x0BA4, /* த */
	0x0BA8, /* ந */
	0x0BAA, /* ப */
	0x0BAE, /* ம */
	0x0BAF, /* ய */
	0x0BB0, /* ர */
	0x0BB2, /* ல */
	0x0BB5, /* வ */
	0x0BB4, /* ழ */
	0x0BB3, /* ள */
	0x0BB1, /* ற */
	0x0BA9, /* ன */
	0x0B9C, /* ஜ */
	0x0BB6, /* ஶ */
	0x0BB7, /* ஷ */
	0x0BB8, /* ஸ */
	0x0BB9, /* ஹ */
	0
};

/* Telugu */
UChar TELU_HEAD[]={
	/* Independent vowels */
	0x0C05, /* అ */
	0x0C06, /* ఆ */
	0x0C07, /* ఇ */
	0x0C08, /* ఈ */
	0x0C09, /* ఉ */
	0x0C0A, /* ఊ */
	0x0C0B, /* ఋ */
	0x0C0C, /* ఌ */
	0x0C0E, /* ఎ */
	0x0C0F, /* ఏ */
	0x0C10, /* ఐ */
	0x0C12, /* ఒ */
	0x0C13, /* ఓ */
	0x0C14, /* ఔ */
	/* Consonants */
	0x0C15, /* క */
	0x0C16, /* ఖ */
	0x0C17, /* గ */
	0x0C18, /* ఘ */
	0x0C19, /* ఙ */
	0x0C1A, /* చ */
	0x0C1B, /* ఛ */
	0x0C1C, /* జ */
	0x0C1D, /* ఝ */
	0x0C1E, /* ఞ */
	0x0C1F, /* ట */
	0x0C20, /* ఠ */
	0x0C21, /* డ */
	0x0C22, /* ఢ */
	0x0C23, /* ణ */
	0x0C24, /* త */
	0x0C25, /* థ */
	0x0C26, /* ద */
	0x0C27, /* ధ */
	0x0C28, /* న */
	0x0C2A, /* ప */
	0x0C2B, /* ఫ */
	0x0C2C, /* బ */
	0x0C2D, /* భ */
	0x0C2E, /* మ */
	0x0C2F, /* య */
	0x0C30, /* ర */
	0x0C31, /* ఱ */
	0x0C32, /* ల */
	0x0C35, /* వ */
	0x0C36, /* శ */
	0x0C37, /* ష */
	0x0C38, /* స */
	0x0C39, /* హ */
	0x0C33, /* ళ */
	0x0C34, /* ఴ */
	0
};

/* Kannada */
UChar KNDA_HEAD[]={
	/* Independent vowels */
	0x0C85, /* ಅ */
	0x0C86, /* ಆ */
	0x0C87, /* ಇ */
	0x0C88, /* ಈ */
	0x0C89, /* ಉ */
	0x0C8A, /* ಊ */
	0x0C8B, /* ಋ */
	0x0C8C, /* ಌ */
	0x0C8E, /* ಎ */
	0x0C8F, /* ಏ */
	0x0C90, /* ಐ */
	0x0C92, /* ಒ */
	0x0C93, /* ಓ */
	0x0C94, /* ಔ */
	/* Consonants */
	0x0C95, /* ಕ */
	0x0C96, /* ಖ */
	0x0C97, /* ಗ */
	0x0C98, /* ಘ */
	0x0C99, /* ಙ */
	0x0C9A, /* ಚ */
	0x0C9B, /* ಛ */
	0x0C9C, /* ಜ */
	0x0C9D, /* ಝ */
	0x0C9E, /* ಞ */
	0x0C9F, /* ಟ */
	0x0CA0, /* ಠ */
	0x0CA1, /* ಡ */
	0x0CA2, /* ಢ */
	0x0CA3, /* ಣ */
	0x0CA4, /* ತ */
	0x0CA5, /* ಥ */
	0x0CA6, /* ದ */
	0x0CA7, /* ಧ */
	0x0CA8, /* ನ */
	0x0CAA, /* ಪ */
	0x0CAB, /* ಫ */
	0x0CAC, /* ಬ */
	0x0CAD, /* ಭ */
	0x0CAE, /* ಮ */
	0x0CAF, /* ಯ */
	0x0CB0, /* ರ */
	0x0CB1, /* ಱ */
	0x0CB2, /* ಲ */
	0x0CB5, /* ವ */
	0x0CB6, /* ಶ */
	0x0CB7, /* ಷ */
	0x0CB8, /* ಸ */
	0x0CB9, /* ಹ */
	0x0CB3, /* ಳ */
	0x0CDE, /* ೞ */
	0
};

/* Malayalam */
UChar MLYM_HEAD[]={
	/* Independent vowels */
	0x0D05, /* അ */
	0x0D06, /* ആ */
	0x0D07, /* ഇ */
	0x0D08, /* ഈ */
	0x0D09, /* ഉ */
	0x0D0A, /* ഊ */
	0x0D0B, /* ഋ */
	0x0D0C, /* ഌ */
	0x0D0E, /* എ */
	0x0D0F, /* ഏ */
	0x0D10, /* ഐ */
	0x0D12, /* ഒ */
	0x0D13, /* ഓ */
	0x0D14, /* ഔ */
	/* Consonants */
	0x0D15, /* ക */
	0x0D16, /* ഖ */
	0x0D17, /* ഗ */
	0x0D18, /* ഘ */
	0x0D19, /* ങ */
	0x0D1A, /* ച */
	0x0D1B, /* ഛ */
	0x0D1C, /* ജ */
	0x0D1D, /* ഝ */
	0x0D1E, /* ഞ */
	0x0D1F, /* ട */
	0x0D20, /* ഠ */
	0x0D21, /* ഡ */
	0x0D22, /* ഢ */
	0x0D23, /* ണ */
	0x0D24, /* ത */
	0x0D25, /* ഥ */
	0x0D26, /* ദ */
	0x0D27, /* ധ */
	0x0D28, /* ന */
	0x0D2A, /* പ */
	0x0D2B, /* ഫ */
	0x0D2C, /* ബ */
	0x0D2D, /* ഭ */
	0x0D2E, /* മ */
	0x0D2F, /* യ */
	0x0D30, /* ര */
	0x0D32, /* ല */
	0x0D35, /* വ */
	0x0D36, /* ശ */
	0x0D37, /* ഷ */
	0x0D38, /* സ */
	0x0D39, /* ഹ */
	0x0D33, /* ള */
	0x0D34, /* ഴ */
	0x0D31, /* റ */
	0
};

/* Sinhala */
UChar SINH_HEAD[]={
	/* Independent vowels */
	0x0D85, /* අ */
	0x0D86, /* ආ */
	0x0D87, /* ඇ */
	0x0D88, /* ඈ */
	0x0D89, /* ඉ */
	0x0D8A, /* ඊ */
	0x0D8B, /* උ */
	0x0D8C, /* ඌ */
	0x0D8D, /* ඍ */
	0x0D8E, /* ඎ */
	0x0D8F, /* ඏ */
	0x0D90, /* ඐ */
	0x0D91, /* එ */
	0x0D92, /* ඒ */
	0x0D93, /* ඓ */
	0x0D94, /* ඔ */
	0x0D95, /* ඕ */
	0x0D96, /* ඖ */
	/* Consonants */
	0x0D9A, /* ක */
	0x0D9B, /* ඛ */
	0x0D9C, /* ග */
	0x0D9D, /* ඝ */
	0x0D9E, /* ඞ */
	0x0D9F, /* ඟ */
	0x0DA0, /* ච */
	0x0DA1, /* ඡ */
	0x0DA2, /* ජ */
	0x0DA3, /* ඣ */
	0x0DA4, /* ඤ */
	0x0DA5, /* ඥ */
	0x0DA6, /* ඦ */
	0x0DA7, /* ට */
	0x0DA8, /* ඨ */
	0x0DA9, /* ඩ */
	0x0DAA, /* ඪ */
	0x0DAB, /* ණ */
	0x0DAC, /* ඬ */
	0x0DAD, /* ත */
	0x0DAE, /* ථ */
	0x0DAF, /* ද */
	0x0DB0, /* ධ */
	0x0DB1, /* න */
	0x0DB3, /* ඳ */
	0x0DB4, /* ප */
	0x0DB5, /* ඵ */
	0x0DB6, /* බ */
	0x0DB7, /* භ */
	0x0DB8, /* ම */
	0x0DB9, /* ඹ */
	0x0DBA, /* ය */
	0x0DBB, /* ර */
	0x0DBD, /* ල */
	0x0DC0, /* ව */
	0x0DC1, /* ශ */
	0x0DC2, /* ෂ */
	0x0DC3, /* ස */
	0x0DC4, /* හ */
	0x0DC5, /* ළ */
	0x0DC6, /* ෆ */
	0
};

/* Thai */
UChar THAI_HEAD[]={
	0x0E01, /* ก */
	0x0E02, /* ข */
	0x0E03, /* ฃ */
	0x0E04, /* ค */
	0x0E05, /* ฅ */
	0x0E06, /* ฆ */
	0x0E07, /* ง */
	0x0E08, /* จ */
	0x0E09, /* ฉ */
	0x0E0A, /* ช */
	0x0E0B, /* ซ */
	0x0E0C, /* ฌ */
	0x0E0D, /* ญ */
	0x0E0E, /* ฎ */
	0x0E0F, /* ฏ */
	0x0E10, /* ฐ */
	0x0E11, /* ฑ */
	0x0E12, /* ฒ */
	0x0E13, /* ณ */
	0x0E14, /* ด */
	0x0E15, /* ต */
	0x0E16, /* ถ */
	0x0E17, /* ท */
	0x0E18, /* ธ */
	0x0E19, /* น */
	0x0E1A, /* บ */
	0x0E1B, /* ป */
	0x0E1C, /* ผ */
	0x0E1D, /* ฝ */
	0x0E1E, /* พ */
	0x0E1F, /* ฟ */
	0x0E20, /* ภ */
	0x0E21, /* ม */
	0x0E22, /* ย */
	0x0E23, /* ร */
	0x0E24, /* ฤ */
	0x0E25, /* ล */
	0x0E26, /* ฦ */
	0x0E27, /* ว */
	0x0E28, /* ศ */
	0x0E29, /* ษ */
	0x0E2A, /* ส */
	0x0E2B, /* ห */
	0x0E2C, /* ฬ */
	0x0E2D, /* อ */
	0x0E2E, /* ฮ */
	0
};

/* Lao */
UChar LAO_HEAD[]={
	0x0E81, /* ກ */
	0x0E82, /* ຂ */
	0x0E84, /* ຄ */
	0x0E87, /* ງ */
	0x0E88, /* ຈ */
	0x0EAA, /* ສ */
	0x0E8A, /* ຊ */
	0x0E8D, /* ຍ */
	0x0E94, /* ດ */
	0x0E95, /* ຕ */
	0x0E96, /* ຖ */
	0x0E97, /* ທ */
	0x0E99, /* ນ */
	0x0E9A, /* ບ */
	0x0E9B, /* ປ */
	0x0E9C, /* ຜ */
	0x0E9D, /* ຝ */
	0x0E9E, /* ພ */
	0x0E9F, /* ຟ */
	0x0EA1, /* ມ */
	0x0EA2, /* ຢ */
	0x0EA3, /* ຣ */
	0x0EA5, /* ລ */
	0x0EA7, /* ວ */
	0x0EAB, /* ຫ */
	0x0EAD, /* ອ */
	0x0EAE, /* ຮ */
	0
};
