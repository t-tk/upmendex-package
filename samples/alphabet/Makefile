UPMENDEX = upmendex

alphabet: zh
	for num in 1 2; do \
	for loc in be bg ca da de eo es fi fr gl lt nb nn no pl ro ru sr sv uk vi; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_$$loc$$num.ist -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 11 12; do \
	for loc in de; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_$$loc$$num.ist -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 11 12 13 22 22 23; do \
	for loc in es; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_$$loc$$num.ist -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 1 2 3; do \
	for loc in az cs hr hu sk sl srl sq tr; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_$$loc$$num.ist -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 11 12 13; do \
	for loc in cs hr sk srl; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_$$loc$$num.ist -o alpha_$$loc$$num.ind ; \
	done ; \
	done

zh:
	for num in 1 2 11 12 13 14 21 22 31; do \
	for loc in zh; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_$$loc$$num.ist -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 11 12 13 14; do \
		loc='zh' ; \
		locx='zhr' ; \
		$(UPMENDEX) alpha_$$locx.idx -s mdxsty_$$loc$$num.ist -o alpha_$$locx$$num.ind ; \
	done
	for num in 21 22; do \
		loc='zh' ; \
		locx='zhs' ; \
		$(UPMENDEX) alpha_$$locx.idx -s mdxsty_$$loc$$num.ist -o alpha_$$locx$$num.ind ; \
	done
	for num in 31; do \
		loc='zh' ; \
		locx='zhz' ; \
		$(UPMENDEX) alpha_$$locx.idx -s mdxsty_$$loc$$num.ist -o alpha_$$locx$$num.ind ; \
	done
	for num in 1 2; do \
		loc='zh' ; \
		locx='zhp' ; \
		$(UPMENDEX) alpha_$$locx.idx -s mdxsty_$$loc$$num.ist -o alpha_$$locx$$num.ind ; \
	done
