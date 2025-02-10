upmendex  --- Multilingual index processor
==========================================

2025.02.10 Ver1.11

TANAKA, Takuji
<ttk(at)t-lab.opal.ne.jp>


### About upmendex
upmendex is a multilingual index processor with following features:

 * Mostly compatible with makeindex and
   upper compatible with mendex,
   based on mendex version 2.6f by ASCII media works.
 * Unicode for internal process and
   support UTF-8 encoding for input/output.
   Work with upLaTeX, XeLaTeX and luaLaTeX.
 * Support Latin (including non-English), Greek, Cyrillic,
   Korean Hangul and Chinese Han (Hanzi ideographs) scripts
   as well as Japanese Kana.
 * Support Devanagari, Thai, Arabic and Hebrew scripts (experimental).
 * Support four kinds of sort orders (Pinyin, Radical-Stroke,
   Stroke and Zhuyin) for Chinese Han scripts (Hanzi ideographs).
 * Apply International Components for Unicode (ICU)[4]
   for sorting process.

### Contents
 * README.md :: This file
 * source/ :: sources
   * source/texk/upmendex :: upmendex source files.
   * source/{build-aux,m4,texk/{kpathsea,tests},version.ac}
        :: build environment copied from TeX Live svn repository.
           They are not a part of upmendex distribution.
 * doc/ :: documents
 * doc/samples/ :: samples for test.
   More samples are distributed at GitHub[2] than at CTAN[5].
   * doc/samples/alphabet :: samples for languages and collation options.
   * doc/samples/option :: samples for ICU attributes/rules options etc.
   * doc/samples/latex :: samples for upLaTeX/pxbabel and XeLaTeX/polyglossia.
 * doc/present/ :: materials presented at meetings.
 * man/ :: manuals

### Building upmendex
The source files are distributed at GitHub[2] and work with TeX Live svn r73836.
Ref. [TeX Live and Subversion](http://www.tug.org/texlive/svn/)

Tested with ICU 76.1 .

### Status
Stable version.
No warranty.

### Copyright
Lisence notice is written in [COPYRIGHT](./COPYRIGHT).
It is as same as [the BSD 3-Clause License](https://opensource.org/licenses/BSD-3-Clause)

### ChangeLog
ChangeLog is written in [ChangeLog](./source/texk/upmendex/ChangeLog).

### Supported locales
In ICU collator, default "root" locale covers several lauguages:
English, French, German, Italian, Portuguese and so on.
Much of languages and collation options are supported by
setting into "icu_locale" in style files.
Currently following locales are available:

#### Latin script
  "af" (Afrikaans), "az", "az@collation=search" (Azerbaijani),
  "bs", "bs@collation=search" (Bosnian),
  "ca@collation=search" (Catalan), "cs", "cs@collation=search" (Czech),
  "cy" (Welsh), "da", "da@collation=search" (Danish),
  "de@collation=phonebook", "de@collation=search", "de-AT@collation=phonebook" (German),
  "eo" (Espelanto), "es", "es@collation=traditional", "es@collation=search" (Spanish),
  "et" (Estonian), "fi", "fi@collation=search", "fi@collation=traditional" (Finnish),
  "fr-CA" (French), "gl", "gl@collation=search" (Galician),
  "hr", "hr@collation=search" (Croatian), "hu" (Hungarian),
  "is", "is@collation=search" (Icelandic), "lt" (Lithuanian), "lv" (Latvian),
  "nb", "nb@collation=search", "nn", "nn@collation=search", "no" (Norwegian),
  "pl" (Polish), "ro" (Romanian), "sk", "sk@collation=search" (Slovak),
  "sl" (Slovenian), "sq" (Albanian), "sr-Latn", "sr-Latn@collation=search" (Serbian),
  "sv", "sv@collation=search", "sv@collation=standard" (Swedish), "tk" (Turkmen),
  "tr" (Turkish), "vi", "vi@collation=traditional" (Vietnamese)

##### Supported by default "root" collator. Do not need to set locale
  "ca" (Catalan), "de" (German), "en" (English), "fr" (French), "id" (Indonesian),
  "it" (Italian), "jv" (Javanese), "ms" (Malay), "nl" (Dutch), "pt" (Portuguese)

#### Cyrillic script
  "be" (Belarusian), "bg" (Bulgarian), "bs-Cyrl" (Bosnian), "kk" (Kazakh), "ky" (Kyrgyz),
  "mk" (Macedonian), "ru" (Russian), "sr" (Serbian), "uk" (Ukraine)

#### Greek script
  "el" (Greek)

#### CJK (Han script (Hanzi), Hangul, Kana)
  "ja", "ja@collation=unihan" (Japanese),
  "ko", "ko@collation=search", "ko@collation=unihan" (Korean),
  "zh" [Pinyin Sort Order], "zh@collation=unihan" [Radical-Stroke Sort Order],
  "zh@collation=stroke" [Stroke Sort Order], "zh@collation=zhuyin" [Zhuyin Sort Order] (Chinese)

#### Devanagari (experimental)
  "hi" (Hindi), "mr" (Marathi), "ne" (Nepali)

#### Thai script (experimental)
  "th" (Thai)

#### Arabic script (experimental)
  "ar", "ar@collation=compat" (Arabic), "fa" (Persian), "fa-AF" (Dari), "ps" (Pashto),
  "ug" (Uyghur), "ur" (Urdu)

#### Hebrew script (experimental)
  "he", "he@collation=search" (Hebrew), "yi" (Yiddish)

### References
1.  [ASCII Nihongo TeX (Publishing TeX)](https://asciidwango.github.io/ptex/)
    ASCII MEDIA WORKS (web site by DWANGO Co., Ltd.)
2.  [Source/Document distribution of upmendex --- multilingual index processor @ GitHub](https://github.com/t-tk/upmendex-package)
3.  [upTeX, upLaTeX ― unicode version of pTeX, pLaTeX](http://www.t-lab.opal.ne.jp/tex/uptex_en.html)
4.  [International Components for Unicode (ICU)](https://icu.unicode.org/)
5.  [upmendex @ CTAN](https://ctan.org/pkg/upmendex/)

