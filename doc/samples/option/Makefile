UPMENDEX = upmendex
MENDEX = mendex -U

all: attri rules jp_u

#
# test for icu_attributes
#
attri:
# default
	for sty in A0_S0_F0_CF0_CL0_N0; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_$$sty.ist -o attri1_$$sty.ind ; \
	done
# alternate
	for sty in As_S0_F0_CF0_CL0_N0 An_S0_F0_CF0_CL0_N0 As_Sq_F0_CF0_CL0_N0; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_$$sty.ist -o attri1_$$sty.ind ; \
	done
# strength
	for sty in A0_Sp_F0_CF0_CL0_N0 A0_Ss_F0_CF0_CL0_N0 A0_St_F0_CF0_CL0_N0 A0_Sq_F0_CF0_CL0_N0 A0_Si_F0_CF0_CL0_N0; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_$$sty.ist -o attri1_$$sty.ind ; \
	done
# french-collation
	for sty in A0_S0_Fn_CF0_CL0_N0 A0_S0_Ff_CF0_CL0_N0; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_$$sty.ist -o attri1_$$sty.ind ; \
	done
# case-first
	for sty in A0_S0_F0_CFf_CL0_N0 A0_S0_F0_CFu_CL0_N0 A0_S0_F0_CFl_CL0_N0; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_$$sty.ist -o attri1_$$sty.ind ; \
	done
# case-level
	for sty in A0_S0_F0_CF0_CLn_N0 A0_S0_F0_CF0_CLf_N0; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_$$sty.ist -o attri1_$$sty.ind ; \
	done
# normalization-mode
	for sty in A0_S0_F0_CF0_CL0_Nn A0_S0_F0_CF0_CL0_Nf; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_$$sty.ist -o attri1_$$sty.ind ; \
	done

#
# test for icu_rules
#
rules:
	for sty in rule0; do \
		$(UPMENDEX) -f attri1.idx -s mdxsty_$$sty.ist -o attri1_$$sty.ind ; \
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


compare:
	for ind in $(wildcard attri*.ind *-umdx.ind); do \
		diff -qs $$ind output/$$ind ; \
	done

clean:
	rm -f *.ind *.ilg
