UPMENDEX = upmendex
MENDEX = mendex -U

all: attri rules jp_u char_order_u

#
# test for icu_attributes
#
attri: default alternate strength french-collation case-first case-level normalization-mode numeric-ordering

default:
	for sty in default; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_attr_$$sty.ist -t attri1_$$sty.ilg -o attri1_$$sty.ind ; \
	done

alternate:
	for sty in As An As_Sq; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_attr_$$sty.ist -t attri1_$$sty.ilg -o attri1_$$sty.ind ; \
	done

strength:
	for sty in Sp Ss St Sq Si; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_attr_$$sty.ist -t attri1_$$sty.ilg -o attri1_$$sty.ind ; \
	done

french-collation:
	for sty in Fn Ff; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_attr_$$sty.ist -t attri1_$$sty.ilg -o attri1_$$sty.ind ; \
	done

case-first:
	for sty in CFf CFu CFl; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_attr_$$sty.ist -t attri1_$$sty.ilg -o attri1_$$sty.ind ; \
	done

case-level:
	for sty in CLn CLf; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_attr_$$sty.ist -t attri1_$$sty.ilg -o attri1_$$sty.ind ; \
	done

normalization-mode:
	for sty in Nn Nf; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_attr_$$sty.ist -t attri1_$$sty.ilg -o attri1_$$sty.ind ; \
	done

numeric-ordering:
	for sty in NOn NOf; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_attr_$$sty.ist -t attri1_$$sty.ilg -o attri1_$$sty.ind ; \
	done


#
# test for icu_rules
#
rules:
	for sty in rule0; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_$$sty.ist -t attri1_$$sty.ilg -o attri1_$$sty.ind ; \
	done

#
# test for Japanese and compatibility with ASCII mendexk
#
jp_u:
	for sty in 00 01 02; do \
		$(UPMENDEX) japanese.idx -s mdxsty_j$$sty.ist -o japanese_$$sty-umdx.ind ; \
		$(UPMENDEX) japanese.idx -l -s mdxsty_j$$sty.ist -o japanese_l_$$sty-umdx.ind ; \
		$(UPMENDEX) japanese.idx -c -s mdxsty_j$$sty.ist -o japanese_c_$$sty-umdx.ind ; \
		$(UPMENDEX) japanese.idx -l -c -s mdxsty_j$$sty.ist -o japanese_lc_$$sty-umdx.ind ; \
		$(UPMENDEX) japanese.idx -r -s mdxsty_j$$sty.ist -o japanese_r_$$sty-umdx.ind ; \
		$(UPMENDEX) japanese.idx -g -s mdxsty_j$$sty.ist -o japanese_g_$$sty-umdx.ind ; \
	done

jp_a:
	for sty in 00 01 02; do \
		$(MENDEX)   japanese.idx -s mdxsty_j$$sty.ist -o japanese_$$sty-amdx.ind ; \
		$(MENDEX)   japanese.idx -l -s mdxsty_j$$sty.ist -o japanese_l_$$sty-amdx.ind ; \
		$(MENDEX)   japanese.idx -c -s mdxsty_j$$sty.ist -o japanese_c_$$sty-amdx.ind ; \
		$(MENDEX)   japanese.idx -l -c -s mdxsty_j$$sty.ist -o japanese_lc_$$sty-amdx.ind ; \
		$(MENDEX)   japanese.idx -r -s mdxsty_j$$sty.ist -o japanese_r_$$sty-amdx.ind ; \
		$(MENDEX)   japanese.idx -g -s mdxsty_j$$sty.ist -o japanese_g_$$sty-amdx.ind ; \
	done

jp_cmp:
	for sty in 00 01 02; do \
		diff -qs japanese_$$sty-umdx.ind japanese_$$sty-amdx.ind ; \
		diff -qs japanese_l_$$sty-umdx.ind japanese_l_$$sty-amdx.ind ; \
		diff -qs japanese_c_$$sty-umdx.ind japanese_c_$$sty-amdx.ind ; \
		diff -qs japanese_lc_$$sty-umdx.ind japanese_lc_$$sty-amdx.ind ; \
		diff -qs japanese_r_$$sty-umdx.ind japanese_r_$$sty-amdx.ind ; \
		diff -qs japanese_g_$$sty-umdx.ind japanese_g_$$sty-amdx.ind ; \
	done

char_order_u:
	for sty in 02; do \
	for sym in 0; do \
	for ord in `seq -f %02g 0 16`; do \
		$(UPMENDEX) chorder.idx -s mdxsty_j$$sty.ist -s symbol_$$sym.ist -s order_u$$ord.ist \
			-t chorder_$$sty-$$sym-$$ord-umdx.ilg -o chorder_$$sty-$$sym-$$ord-umdx.ind ; \
	done ; \
	done ; \
	done
	for sty in 02; do \
	for sym in 1 2; do \
	for ord in 00 02 09 10 13 14; do \
		$(UPMENDEX) chorder.idx -s mdxsty_j$$sty.ist -s symbol_$$sym.ist -s order_u$$ord.ist \
			-t chorder_$$sty-$$sym-$$ord-umdx.ilg -o chorder_$$sty-$$sym-$$ord-umdx.ind ; \
	done ; \
	done ; \
	done
	for sty in 03; do \
	for sym in 0 1 2; do \
	for ord in 00 02 09 10 13 14; do \
		$(UPMENDEX) chorder.idx -s mdxsty_j$$sty.ist -s symbol_$$sym.ist -s order_u$$ord.ist \
			-t chorder_$$sty-$$sym-$$ord-umdx.ilg -o chorder_$$sty-$$sym-$$ord-umdx.ind ; \
	done ; \
	done ; \
	done
	for sty in 04 05 06; do \
	for sym in 0 1 2; do \
	for ord in 00; do \
		$(UPMENDEX) chorder.idx -s mdxsty_j$$sty.ist -s symbol_$$sym.ist -s order_u$$ord.ist \
			-t chorder_$$sty-$$sym-$$ord-umdx.ilg -o chorder_$$sty-$$sym-$$ord-umdx.ind ; \
	done ; \
	done ; \
	done

char_order_a:
	for sty in 02; do \
	for sym in 0; do \
	for ord in `seq -f %02g 0 16`; do \
		$(MENDEX) chorder.idx -s mdxsty_j$$sty.ist -s symbol_$$sym.ist -s order_a$$ord.ist \
			-t chorder_$$sty-$$sym-$$ord-amdx.ilg -o chorder_$$sty-$$sym-$$ord-amdx.ind ; \
	done ; \
	done ; \
	done
	for sty in 02; do \
	for sym in 1 2; do \
	for ord in 00 02 09 10 13 14; do \
		$(MENDEX) chorder.idx -s mdxsty_j$$sty.ist -s symbol_$$sym.ist -s order_a$$ord.ist \
			-t chorder_$$sty-$$sym-$$ord-amdx.ilg -o chorder_$$sty-$$sym-$$ord-amdx.ind ; \
	done ; \
	done ; \
	done
	for sty in 03; do \
	for sym in 0 1 2; do \
	for ord in 00 02 09 10 13 14; do \
		$(MENDEX) chorder.idx -s mdxsty_j$$sty.ist -s symbol_$$sym.ist -s order_a$$ord.ist \
			-t chorder_$$sty-$$sym-$$ord-amdx.ilg -o chorder_$$sty-$$sym-$$ord-amdx.ind ; \
	done ; \
	done ; \
	done
	for sty in 04 05 06; do \
	for sym in 0 1 2; do \
	for ord in 00; do \
		$(MENDEX) chorder.idx -s mdxsty_j$$sty.ist -s symbol_$$sym.ist -s order_a$$ord.ist \
			-t chorder_$$sty-$$sym-$$ord-amdx.ilg -o chorder_$$sty-$$sym-$$ord-amdx.ind ; \
	done ; \
	done ; \
	done

char_order_cmp:
	for sty in 02; do \
	for sym in 0; do \
	for ord in `seq -f %02g 0 16`; do \
		diff -qs chorder_$$sty-$$sym-$$ord-umdx.ind chorder_$$sty-$$sym-$$ord-amdx.ind ; \
	done ; \
	done ; \
	done
	for sty in 02; do \
	for sym in 1 2; do \
	for ord in 00 02 09 10 13 14; do \
		diff -qs chorder_$$sty-$$sym-$$ord-umdx.ind chorder_$$sty-$$sym-$$ord-amdx.ind ; \
	done ; \
	done ; \
	done
	for sty in 03; do \
	for sym in 0 1 2; do \
	for ord in 00 02 09 10 13 14; do \
		diff -qs chorder_$$sty-$$sym-$$ord-umdx.ind chorder_$$sty-$$sym-$$ord-amdx.ind ; \
	done ; \
	done ; \
	done
	for sty in 04 05 06; do \
	for sym in 0 1 2; do \
	for ord in 00; do \
		diff -qs chorder_$$sty-$$sym-$$ord-umdx.ind chorder_$$sty-$$sym-$$ord-amdx.ind ; \
	done ; \
	done ; \
	done


compare:
	for ind in $(wildcard attri*.ind *-umdx.ind); do \
		diff -qs $$ind output/$$ind ; \
	done

clean:
	rm -f *.ind *.ilg
