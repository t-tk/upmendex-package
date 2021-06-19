UPMENDEX = upmendex

alphabet: ltn cyr grk zh ja

ltn:
	for num in 1 2; do \
	for loc in ca da de eo es fi fr gl lt nb nn no pl ro sv vi; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head$$num.ist -s mdxsty_$$loc.ist -t alpha_$$loc$$num.ilg -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 1 2; do \
	for loc in da de nb nn ca vi; do \
		locx=$${loc}1 ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head$$num.ist -s mdxsty_$$locx.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done ; \
	done
	for num in 1 2; do \
	for x in 1 2; do \
	for loc in sv fi; do \
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
	for loc in az cs hr hu sk sl srl sq tr; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head$$num.ist -s mdxsty_$$loc.ist -t alpha_$$loc$$num.ilg -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 1 2 3; do \
	for loc in az cs hr sk srl; do \
		locx=$${loc}1 ; \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_head$$num.ist -s mdxsty_$$locx.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done ; \
	done

cyr:
	for num in 1 2; do \
	for loc in be bg ru sr uk; do \
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
	for num in 1 2 3 11 12 13 21 22 23 31 32 33; do \
	for loc in ja; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_$$loc$$num.ist -t alpha_$$loc$$num.ilg -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 1 2 3; do \
		loc='ja' ; \
		locx='jag' ; \
		$(UPMENDEX) -g alpha_$$loc.idx -s mdxsty_$$loc$$num.ist -t alpha_$$locx$$num.ilg -o alpha_$$locx$$num.ind ; \
	done

compare:
	for ind in $(wildcard *.ind); do \
		diff -qs $$ind output/$$ind ; \
	done

clean:
	rm -f *.ind *.ilg
