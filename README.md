upmendex  --- Multilingual index processor
==========================================

2019.02.17 Ver0.52

TANAKA, Takuji
<ttk(at)t-lab.opal.ne.jp>


### About upmendex
upmendex is a multilingual index processor with following features:

 * Mostly compatible with makeindex and
   upper compatible with mendex,
   based on mendex version 2.6f by ASCII media works.
 * Unicode for internal process and
   support UTF-8 encoding for input/output.
   Will work with upLaTeX, XeLaTeX and luaLaTeX.
 * Support Latin (including non-English), Greek, Cyrillic,
   Korean Hangul and Han (Hanzi ideographs) scripts
   as well as Japanese Kana.
 * Apply International Components for Unicode (ICU)[4]
   for sorting process.

### Contents
 * README.md :: This file
 * source/ :: sources
 * doc/ :: documents
 * doc/samples/ :: samples for test.
   More samples are distributed at Ref. [2].
 * man/ :: manuals

### Building upmendex
The source files are distributed at GitHub[2] and work with TeX Live svn r50040.
Ref. [TeX Live and Subversion](http://www.tug.org/texlive/svn/)

Tested with ICU 63.1 .

### Status
Beta version.
No warranty.

### Copyright
Lisence notice is written in [COPYRIGHT](./COPYRIGHT).
It is as same as [the BSD 3-Clause License](https://opensource.org/licenses/BSD-3-Clause)

### Supported locale
In ICU collator, default "root" locale covers several lauguages:
English, French, Germany, Italian and so on.
Follows are available for setting into "icu_locale".

#### Latin script
  "az" (Azerbaijani), "ca" (Catalan), "cs", "cs@collation=search" (Czech),
  "da" (Danish), "de@collation=phonebook" (German), "eo" (Espelanto),
  "es", "es@collation=traditional", "es@collation=search" (Spanish),
  "fi" (Finnish), "gl" (Galician),
  "hr", "hr@collation=search" (Croatian), "hu" (Hungarian),
  "lt" (Lithuanian), "nb", "nn", "no" (Norwegian),
  "pl" (Polish), "ro" (Romanian), "sk", "sk@collation=search" (Slovak),
  "sl" (Slovenian), "sq" (Albanian),
  "sr-Latn", "sr-Latn@collation=search" (Serbian), "sv" (Swedish),
  "tr" (Turkish), "vi" (Vietnamese)

#### Cyrillic script
  "be" (Belarusian), "bg" (Bulgarian), "ru" (Russian),
  "sr" (Serbian), "uk" (Ukraine)

#### Greek script
  "el" (Greek)

#### CJK (Han script (Hanzi), Hangul, Kana)
  "ja", "ja@collation=unihan" (Japanese),
  "ko", "ko@collation=search", "ko@collation=unihan" (Korean),
  "zh", "zh@collation=unihan", "zh@collation=stroke", "zh@collation=zhuyin" (Chinese)

### References
1.  [ASCII Nihongo TeX (Publishing TeX)](http://ascii.asciimw.jp/pb/ptex/)
    ASCII MEDIA WORKS (dead link)
2.  [Source/Document distribution of upmendex --- multilingual index processor @ GitHub](https://github.com/t-tk/upmendex-package)
3.  [upTeX, upLaTeX ― unicode version of pTeX, pLaTeX](http://www.t-lab.opal.ne.jp/tex/uptex_en.html)
4.  [International Components for Unicode (ICU)](http://site.icu-project.org/)

