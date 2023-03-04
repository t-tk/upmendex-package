UPMENDEX = upmendex

#
# test for icu_rules
#
rules:
	for sty in 0; do \
		$(UPMENDEX) -s mdxsty_attr_default.ist -s rule$$sty.ist -t rule0_$$sty.ilg -o rule0_$$sty.ind attri1.idx ; \
	done

#
# test for Japanese
#
jp_u:
	for sty in 00 01 02; do \
		$(UPMENDEX) japanese.idx -s mdxsty_j$$sty.ist -d kana.dic -t japanese_$$sty-umdx.ilg -o japanese_$$sty-umdx.ind ; \
		$(UPMENDEX) japanese.idx -l -s mdxsty_j$$sty.ist -d kana.dic -t japanese_l_$$sty-umdx.ilg -o japanese_l_$$sty-umdx.ind ; \
		$(UPMENDEX) japanese.idx -c -s mdxsty_j$$sty.ist -d kana.dic -t japanese_c_$$sty-umdx.ilg -o japanese_c_$$sty-umdx.ind ; \
		$(UPMENDEX) japanese.idx -l -c -s mdxsty_j$$sty.ist -d kana.dic -t japanese_lc_$$sty-umdx.ilg -o japanese_lc_$$sty-umdx.ind ; \
		$(UPMENDEX) japanese.idx -r -s mdxsty_j$$sty.ist -d kana.dic -t japanese_r_$$sty-umdx.ilg -o japanese_r_$$sty-umdx.ind ; \
		$(UPMENDEX) japanese.idx -g -s mdxsty_j$$sty.ist -d kana.dic -t japanese_g_$$sty-umdx.ilg -o japanese_g_$$sty-umdx.ind ; \
	done

clean:
	rm -f *.ind *.ilg
