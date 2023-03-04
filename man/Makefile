# groff with CJK support is required
#   Ref.
#   http://savannah.gnu.org/bugs/?62830
#   [PATCH] [grops] support CJK fonts encoded in UTF16
#
MY_GROFF := /foo/bar/somewhere

export PATH := ${MY_GROFF}:${PATH}
export GROFF_BIN_PATH := ${MY_GROFF}
export GROFF_FONT_PATH := ${MY_GROFF}/font
export GROFF_TMAC_PATH := ${MY_GROFF}/tmac

mygroff :
	groff -v

upmendex_conv.1 : upmendex.1
	cp upmendex.1 upmendex_conv.1
	patch -p0 upmendex_conv.1 < upmendex_conv.patch

upmendex_conv.ps : upmendex_conv.1
	groff -K utf8 -T ps -man ./upmendex_conv.1 > ./upmendex_conv.ps

upmendex.man1.pdf : upmendex_conv.ps
	mv upmendex_conv.ps upmendex.man1.ps
	ps2pdf upmendex.man1.ps
