UPMENDEX = upmendex

alphabet: ltn cyr grk zh ja ko dev brhm th arb he

ltn:
	for num in 1 2; do \
	for loc in af ca da de eo es et fi fr gl is jv ku lt lv nb nl nn no pl ro sv tk vi; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head$$num.ist -s mdxsty_$$loc.ist -t alpha_$$loc$$num.ilg -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 1 2; do \
	for loc in da fr gl is nb nn ca vi; do \
		locx=$${loc}1 ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head$$num.ist -s mdxsty_$$locx.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done ; \
	done
	for num in 1 2; do \
	for x in 1 2; do \
	for loc in ro sv fi; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head$$num.ist -s mdxsty_$$locx.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done ; \
	done ; \
	done
	for num in 1 2; do \
	for x in 1 2 3; do \
	for loc in de; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head$$num.ist -s mdxsty_$$locx.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done ; \
	done ; \
	done
	for num in 1 2 3; do \
	for x in 1 2; do \
	for loc in es; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head$$num.ist -s mdxsty_$$locx.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done ; \
	done ; \
	done
	for num in 1 2 3; do \
	for loc in az bs cs cy hr hu sk sl srl sq tr; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head$$num.ist -s mdxsty_$$loc.ist -t alpha_$$loc$$num.ilg -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 1 2 3; do \
	for loc in az bs cs hr sk srl; do \
		locx=$${loc}1 ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head$$num.ist -s mdxsty_$$locx.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done ; \
	done

cyr:
	for num in 1 2; do \
	for loc in be bg bsc kk ky mk ru sr uk; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head$$num.ist -s mdxsty_$$loc.ist -t alpha_$$loc$$num.ilg -o alpha_$$loc$$num.ind ; \
	done ; \
	done

grk:
	for num in 1 2; do \
	for loc in el; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head$$num.ist -s mdxsty_$$loc.ist -t alpha_$$loc$$num.ilg -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 1 2; do \
	for loc in el; do \
		locx=$${loc}1 ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head$$num.ist -s mdxsty_$$locx.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done ; \
	done

zh:
	for num in 1 2 3 11 12 13 14 21 22 31; do \
	for loc in zh; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_$$loc$$num.ist -t alpha_$$loc$$num.ilg -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 11 12 13 14; do \
		loc='zh' ; \
		locx='zhr' ; \
		$(UPMENDEX) alpha_$$locx.idx -s mdxsty_$$loc$$num.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done
	for num in 21 22; do \
		loc='zh' ; \
		locx='zhs' ; \
		$(UPMENDEX) alpha_$$locx.idx -s mdxsty_$$loc$$num.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done
	for num in 31; do \
		loc='zh' ; \
		locx='zhz' ; \
		$(UPMENDEX) alpha_$$locx.idx -s mdxsty_$$loc$$num.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done
	for num in 1 2 3; do \
		loc='zh' ; \
		locx='zhp' ; \
		$(UPMENDEX) alpha_$$locx.idx -s mdxsty_$$loc$$num.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done

ja:
	for num in 1 2 3; do \
	for loc in ja; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head_ja$$num.ist -t alpha_$$loc$$num.ilg -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 1 2 3; do \
	for x in 1 2; do \
	for loc in ja; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head_ja$$num.ist -s mdxsty_$$locx.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done ; \
	done ; \
	done
	for num in 31 32 33; do \
	for loc in ja; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_$$loc$$num.ist -t alpha_$$loc$$num.ilg -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 1 2 3; do \
		loc='ja' ; \
		locx='jag' ; \
		$(UPMENDEX) -g alpha_$$loc.idx -s mdxsty_head_ja$$num.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done
	for num in 1 2 3; do \
	for x in 4; do \
	for loc in ja; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_ja.idx alpha_jaA.idx -s mdxsty_head_ja$$num.ist -s mdxsty_$$locx.ist -d kana.dic -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done ; \
	done ; \
	done
	for num in 1 2 3; do \
	for x in 5; do \
	for loc in ja; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_ja.idx alpha_jaA.idx -s mdxsty_head_ja$$num.ist -s mdxsty_ja1.ist -d kana.dic -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done ; \
	done ; \
	done

ko:
	for num in `seq 1 11`; do \
	for loc in ko; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_$$loc$$num.ist -t alpha_$$loc$$num.ilg -o alpha_$$loc$$num.ind ; \
	done ; \
	done

dev:
	for loc in hi mr ne; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head1.ist -s mdxsty_$$loc.ist -t alpha_$$loc.ilg -o alpha_$$loc.ind ; \
	done ; \
	for x in 0; do \
	for loc in hi mr ne; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head1.ist -t alpha_$$locx.ilg -o alpha_$$locx.ind ; \
	done ; \
	done
	for x in 1 2; do \
	for loc in hi mr ne; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head1.ist -s mdxsty_$$locx.ist -t alpha_$$locx.ilg -o alpha_$$locx.ind ; \
	done ; \
	done
	for x in 4; do \
	for loc in hi mr ne; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head4.ist -s mdxsty_$$loc.ist -t alpha_$$locx.ilg -o alpha_$$locx.ind ; \
	done ; \
	done

brhm:
	for loc in bn as pa gu or ta te kn ml si; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head1.ist -s mdxsty_$$loc.ist -t alpha_$$loc.ilg -o alpha_$$loc.ind ; \
	done ; \
	for x in 0; do \
	for loc in bn as pa gu or ta te kn ml si; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head1.ist -t alpha_$$locx.ilg -o alpha_$$locx.ind ; \
	done ; \
	done
	for x in 1 2; do \
	for loc in bn as pa gu or ta te kn ml si; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head1.ist -s mdxsty_$$locx.ist -t alpha_$$locx.ilg -o alpha_$$locx.ind ; \
	done ; \
	done
	for x in 3; do \
	for loc in bn kn si; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head1.ist -s mdxsty_$$locx.ist -t alpha_$$locx.ilg -o alpha_$$locx.ind ; \
	done ; \
	done
	for x in 4; do \
	for loc in bn as pa gu or ta te kn ml si; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head4.ist -s mdxsty_$$loc.ist -t alpha_$$locx.ilg -o alpha_$$locx.ind ; \
	done ; \
	done

th:
	for loc in th lo; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head1.ist -s mdxsty_$$loc.ist -t alpha_$$loc.ilg -o alpha_$$loc.ind ; \
	done ; \
	for x in 1 2; do \
	for loc in th lo; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head1.ist -s mdxsty_$$locx.ist -t alpha_$$locx.ilg -o alpha_$$locx.ind ; \
	done ; \
	done

arb:
	for loc in ar fa faa kua ps ug ur; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head1.ist -s mdxsty_$$loc.ist -t alpha_$$loc.ilg -o alpha_$$loc.ind ; \
	done ; \
	for x in 1; do \
	for loc in ar; do \
		locx=$$loc$$x ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head1.ist -s mdxsty_$$locx.ist -t alpha_$$locx.ilg -o alpha_$$locx.ind ; \
	done ; \
	done

he:
	for loc in he yi; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head1.ist -s mdxsty_$$loc.ist -t alpha_$$loc.ilg -o alpha_$$loc.ind ; \
	done ; \

compare:
	for ind in $(wildcard *.ind); do \
		diff -qs $$ind output/$$ind ; \
	done

clean:
	rm -f *.ind *.ilg
