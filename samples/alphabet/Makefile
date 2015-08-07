UPMENDEX = upmendex

alphabet:
	for num in 1 2; do \
	for loc in be bg ca da de eo es fi fr gl nb nn no pl ro ru sr sv uk vi; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_$$loc$$num.ist -o alpha_$$loc$$num.ind ; \
	done ; \
	done
	for num in 11 12; do \
	for loc in de; do \
		$(UPMENDEX) alpha_$$loc.idx -s mdxsty_$$loc$$num.ist -o alpha_$$loc$$num.ind ; \
	done ; \
	done

