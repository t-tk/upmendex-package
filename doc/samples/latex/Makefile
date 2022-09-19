UPMENDEX = upmendex
DVIPDFMX = dvipdfmx -f haranoaji-uptex.map

city0.ind:
	$(UPMENDEX) city0 -s mlg0.ist

city0.pdf:
	xelatex city0.tex
	xelatex city0.tex
	$(UPMENDEX) city0 -s mlg0.ist
	xelatex city0.tex

city1.ind:
	$(UPMENDEX) city1 -s mlg1.ist

city1.dvi:
	uplatex city1.tex
	uplatex city1.tex
	$(UPMENDEX) city1 -s mlg1.ist
	uplatex city1.tex

city1.pdf:
	$(DVIPDFMX) city1.dvi

