UPMENDEX = upmendex
DVIPDFMX = dvipdfmx -f haranoaji-uptex.map
XDVIPDFMX = xdvipdfmx

yomi00.pdf: yomi00.tex
	uplatex yomi00.tex
	uplatex yomi00.tex
	${UPMENDEX} -s mlg3.ist yomi00
	uplatex yomi00.tex
	${DVIPDFMX} yomi00.dvi

yomi00-01.pdf: yomi00.dvi
	dviselect -i yomi00.dvi -o yomi00-01.dvi 1
	${DVIPDFMX} yomi00-01.dvi
	pdfcrop --margins 10 yomi00-01.pdf

yomi00-02.pdf: yomi00.dvi
	dviselect -i yomi00.dvi -o yomi00-02.dvi 2
	${DVIPDFMX} yomi00-02.dvi
	pdfcrop --margins 10 yomi00-02.pdf

yomi01.pdf: yomi01.tex
	uplatex yomi01.tex
	uplatex yomi01.tex
	${UPMENDEX} -s mlg3.ist -d yomi.dic yomi01
	uplatex yomi01.tex
	${DVIPDFMX} yomi01.dvi

yomi01-01.pdf: yomi01.dvi
	dviselect -i yomi01.dvi -o yomi01-01.dvi 1
	${DVIPDFMX} yomi01-01.dvi

yomi01-02.pdf: yomi01.dvi
	dviselect -i yomi01.dvi -o yomi01-02.dvi 2
	${DVIPDFMX} yomi01-02.dvi
	pdfcrop --margins 10 yomi01-02.pdf


ko03.pdf: ko03.tex
	xelatex ko03.tex
	xelatex ko03.tex
	${UPMENDEX} -s mlg4.ist -d hy_pua.dic ko03
	xelatex ko03.tex

ko03-01.pdf: ko03.xdv
	xelatex -no-pdf ko03.tex
	${XDVIPDFMX} -s 1 -o ko03-01.pdf ko03.xdv

ko03-02.pdf: ko03.xdv
	xelatex -no-pdf ko03.tex
	${XDVIPDFMX} -s 2 -o ko03-02.pdf ko03.xdv
	pdfcrop --margins 10 ko03-02.pdf


hu00.pdf: hu00.tex
	xelatex hu00.tex
	xelatex hu00.tex
	${UPMENDEX} -s mlg_hu0.ist hu00
	xelatex hu00.tex

hu00-01.pdf: hu00.xdv
	xelatex -no-pdf hu00.tex
	${XDVIPDFMX} -s 1 -o hu00-01.pdf hu00.xdv

hu00-02.pdf: hu00.xdv
	xelatex -no-pdf hu00.tex
	${XDVIPDFMX} -s 2 -o hu00-02.pdf hu00.xdv
	pdfcrop --margins 10 hu00-02.pdf

tr00.pdf: tr00.tex
	xelatex tr00.tex
	xelatex tr00.tex
	${UPMENDEX} -s mlg_tr0.ist tr00
	xelatex tr00.tex

tr00-01.pdf: tr00.xdv
	xelatex -no-pdf tr00.tex
	${XDVIPDFMX} -s 1 -o tr00-01.pdf tr00.xdv

tr00-02.pdf: tr00.xdv
	xelatex -no-pdf tr00.tex
	${XDVIPDFMX} -s 2 -o tr00-02.pdf tr00.xdv
	pdfcrop --margins 10 tr00-02.pdf


lt00.pdf: lt00.tex
	xelatex lt00.tex
	xelatex lt00.tex
	${UPMENDEX} -s mlg_lt0.ist lt00
	xelatex lt00.tex

lt00-01.pdf: lt00.xdv
	xelatex -no-pdf lt00.tex
	${XDVIPDFMX} -s 1 -o lt00-01.pdf lt00.xdv

lt00-02.pdf: lt00.xdv
	xelatex -no-pdf lt00.tex
	${XDVIPDFMX} -s 2 -o lt00-02.pdf lt00.xdv
	pdfcrop --margins 10 lt00-02.pdf

de00a.pdf:
	xelatex -jobname de00a de00.tex
	xelatex -jobname de00a de00.tex
	${UPMENDEX} -s mlg_de0.ist de00a
	xelatex -no-pdf -jobname de00a de00.tex
	${XDVIPDFMX} -o de00a.pdf de00a.xdv
	${XDVIPDFMX} -s 1 -o de00a-01.pdf de00a.xdv
	${XDVIPDFMX} -s 2 -o de00a-02.pdf de00a.xdv
	pdfcrop --margins 10 de00a-02.pdf

de00b.pdf:
	xelatex -jobname de00b de00.tex
	xelatex -jobname de00b de00.tex
	${UPMENDEX} -s mlg_de1.ist de00b
	xelatex -no-pdf -jobname de00b de00.tex
	${XDVIPDFMX} -o de00b.pdf de00b.xdv
	${XDVIPDFMX} -s 1 -o de00b-01.pdf de00b.xdv
	${XDVIPDFMX} -s 2 -o de00b-02.pdf de00b.xdv
	pdfcrop --margins 10 de00b-02.pdf

de00c.pdf:
	xelatex -jobname de00c de00.tex
	xelatex -jobname de00c de00.tex
	${UPMENDEX} -s mlg_de2.ist de00c
	xelatex -no-pdf -jobname de00c de00.tex
	${XDVIPDFMX} -o de00c.pdf de00c.xdv
	${XDVIPDFMX} -s 1 -o de00c-01.pdf de00c.xdv
	${XDVIPDFMX} -s 2 -o de00c-02.pdf de00c.xdv
	pdfcrop --margins 10 de00c-02.pdf


zh00a.pdf:
	xelatex -jobname zh00a zh00.tex
	xelatex -jobname zh00a zh00.tex
	${UPMENDEX} -s mlg_zh0.ist zh00a
	xelatex -no-pdf -jobname zh00a zh00.tex
	${XDVIPDFMX} -o zh00a.pdf zh00a.xdv
	${XDVIPDFMX} -s 1 -o zh00a-01.pdf zh00a.xdv
	${XDVIPDFMX} -s 2 -o zh00a-02.pdf zh00a.xdv
	pdfcrop --margins 10 zh00a-02.pdf

zh00b.pdf:
	xelatex -jobname zh00b zh00.tex
	xelatex -jobname zh00b zh00.tex
	${UPMENDEX} -s mlg_zh1.ist zh00b
	xelatex -no-pdf -jobname zh00b zh00.tex
	${XDVIPDFMX} -o zh00b.pdf zh00b.xdv
	${XDVIPDFMX} -s 1 -o zh00b-01.pdf zh00b.xdv
	${XDVIPDFMX} -s 2 -o zh00b-02.pdf zh00b.xdv
	pdfcrop --margins 10 zh00b-02.pdf

zh00c.pdf:
	xelatex -jobname zh00c zh00.tex
	xelatex -jobname zh00c zh00.tex
	${UPMENDEX} -s mlg_zh2.ist zh00c
	xelatex -no-pdf -jobname zh00c zh00.tex
	${XDVIPDFMX} -o zh00c.pdf zh00c.xdv
	${XDVIPDFMX} -s 1 -o zh00c-01.pdf zh00c.xdv
	${XDVIPDFMX} -s 2 -o zh00c-02.pdf zh00c.xdv
	pdfcrop --margins 10 zh00c-02.pdf

zh00d.pdf:
	xelatex -jobname zh00d zh00.tex
	xelatex -jobname zh00d zh00.tex
	${UPMENDEX} -s mlg_zh3.ist zh00d
	xelatex -no-pdf -jobname zh00d zh00.tex
	${XDVIPDFMX} -o zh00d.pdf zh00d.xdv
	${XDVIPDFMX} -s 1 -o zh00d-01.pdf zh00d.xdv
	${XDVIPDFMX} -s 2 -o zh00d-02.pdf zh00d.xdv
	pdfcrop --margins 10 zh00d-02.pdf

ru00.pdf:
	xelatex ru00.tex
	xelatex ru00.tex
	${UPMENDEX} -s mlg_ru0.ist ru00
	xelatex -no-pdf ru00.tex
	${XDVIPDFMX} -o ru00.pdf ru00.xdv
	${XDVIPDFMX} -s 1 -o ru00-01.pdf ru00.xdv
	${XDVIPDFMX} -s 2 -o ru00-02.pdf ru00.xdv
	pdfcrop --margins 10 ru00-02.pdf

el00.pdf:
	xelatex el00.tex
	xelatex el00.tex
	${UPMENDEX} -s mlg_el0.ist el00
	xelatex -no-pdf el00.tex
	${XDVIPDFMX} -o el00.pdf el00.xdv
	${XDVIPDFMX} -s 1 -o el00-01.pdf el00.xdv
	${XDVIPDFMX} -s 2 -o el00-02.pdf el00.xdv
	pdfcrop --margins 10 el00-02.pdf


sk00a.pdf:
	xelatex -jobname sk00a sk00.tex
	xelatex -jobname sk00a sk00.tex
	${UPMENDEX} -s mlg_sk0.ist sk00a
	xelatex -no-pdf -jobname sk00a sk00.tex
	${XDVIPDFMX} -o sk00a.pdf sk00a.xdv
	${XDVIPDFMX} -s 1 -o sk00a-01.pdf sk00a.xdv
	${XDVIPDFMX} -s 2 -o sk00a-02.pdf sk00a.xdv
	pdfcrop --margins 10 sk00a-02.pdf

sk00b.pdf:
	xelatex -jobname sk00b sk00.tex
	xelatex -jobname sk00b sk00.tex
	${UPMENDEX} -s mlg_sk1.ist sk00b
	xelatex -no-pdf -jobname sk00b sk00.tex
	${XDVIPDFMX} -o sk00b.pdf sk00b.xdv
	${XDVIPDFMX} -s 1 -o sk00b-01.pdf sk00b.xdv
	${XDVIPDFMX} -s 2 -o sk00b-02.pdf sk00b.xdv
	pdfcrop --margins 10 sk00b-02.pdf

jp01.pdf:
	xelatex jp01.tex
	xelatex jp01.tex
	${UPMENDEX} -s mlg2.ist -d yomi.dic jp01
	xelatex -no-pdf jp01.tex
	${XDVIPDFMX} -o jp01.pdf jp01.xdv
	${XDVIPDFMX} -s 1 -o jp01-01.pdf jp01.xdv
	${XDVIPDFMX} -s 2 -o jp01-02.pdf jp01.xdv
	pdfcrop --margins 10 jp01-02.pdf

jp02.pdf:
	xelatex jp02.tex
	xelatex jp02.tex
	${UPMENDEX} -s mlg5.ist -d yomi1.dic jp02
	xelatex -no-pdf jp02.tex
	${XDVIPDFMX} -o jp02.pdf jp02.xdv
	${XDVIPDFMX} -s 1 -o jp02-01.pdf jp02.xdv
	${XDVIPDFMX} -s 2 -o jp02-02.pdf jp02.xdv
	pdfcrop --margins 10 jp02-02.pdf

jp03.pdf:
	xelatex jp03.tex
	xelatex jp03.tex
	${UPMENDEX} -s mlg6.ist -d yomi.dic jp03
	xelatex -no-pdf jp03.tex
	${XDVIPDFMX} -o jp03.pdf jp03.xdv
	${XDVIPDFMX} -s 1 -o jp03-01.pdf jp03.xdv
	${XDVIPDFMX} -s 2 -o jp03-02.pdf jp03.xdv
	pdfcrop --margins 10 jp03-02.pdf

jp02.ind:
	${UPMENDEX} -s mlg5.ist -d yomi1.dic jp02

jp03.ind:
	${UPMENDEX} -s mlg6.ist -d yomi.dic jp03

jp03_hira.ind:
	${UPMENDEX} -s mlg7.ist -d yomi.dic -o jp03_hira.ind jp03

jp04.pdf:
	xelatex jp04.tex
	xelatex jp04.tex
	${UPMENDEX} -s mlg3.ist -d yomi.dic jp04
	xelatex -no-pdf jp04.tex
	${XDVIPDFMX} -o jp04.pdf jp04.xdv
	${XDVIPDFMX} -s 1 -o jp04-01.pdf jp04.xdv
	${XDVIPDFMX} -s 2 -o jp04-02.pdf jp04.xdv
	pdfcrop --margins 10 jp04-02.pdf

jp05.pdf:
	xelatex jp05.tex
	xelatex jp05.tex
	${UPMENDEX} -s mlg3.ist -d yomi.dic jp05
	xelatex -no-pdf jp05.tex
	${XDVIPDFMX} -o jp05.pdf jp05.xdv
	${XDVIPDFMX} -s 1 -o jp05-01.pdf jp05.xdv
	${XDVIPDFMX} -s 2 -o jp05-02.pdf jp05.xdv
	pdfcrop --margins 10 jp05-02.pdf

ar00.pdf:
	xelatex ar00.tex
	xelatex ar00.tex
	${UPMENDEX} -s mlg_ar0.ist ar00
	xelatex -no-pdf ar00.tex
	${XDVIPDFMX} -o ar00.pdf ar00.xdv
	${XDVIPDFMX} -s 1 -o ar00-01.pdf ar00.xdv
	${XDVIPDFMX} -s 2 -o ar00-02.pdf ar00.xdv
	pdfcrop --margins 10 ar00-02.pdf

he00.pdf:
	xelatex he00.tex
	xelatex he00.tex
	${UPMENDEX} -s mlg_he0.ist he00
	xelatex -no-pdf he00.tex
	${XDVIPDFMX} -o he00.pdf he00.xdv
	${XDVIPDFMX} -s 1 -o he00-01.pdf he00.xdv
	${XDVIPDFMX} -s 2 -o he00-02.pdf he00.xdv
	pdfcrop --margins 10 he00-02.pdf

th00.pdf:
	xelatex th00.tex
	xelatex th00.tex
	${UPMENDEX} -s mlg_th0.ist th00
	xelatex -no-pdf th00.tex
	${XDVIPDFMX} -o th00.pdf th00.xdv
	${XDVIPDFMX} -s 1 -o th00-01.pdf th00.xdv
	${XDVIPDFMX} -s 2 -o th00-02.pdf th00.xdv
	pdfcrop --margins 10 th00-02.pdf

hi00.pdf:
	xelatex hi00.tex
	xelatex hi00.tex
	${UPMENDEX} -s mlg_hi0.ist hi00
	xelatex -no-pdf hi00.tex
	${XDVIPDFMX} -o hi00.pdf hi00.xdv
	${XDVIPDFMX} -s 1 -o hi00-01.pdf hi00.xdv
	${XDVIPDFMX} -s 2 -o hi00-02.pdf hi00.xdv
	pdfcrop --margins 10 hi00-02.pdf

city_texconf.pdf:
	xelatex city_texconf.tex
	xelatex city_texconf.tex
	${UPMENDEX} -s mlg0.ist city_texconf
	xelatex -no-pdf city_texconf.tex
	${XDVIPDFMX} -o city_texconf.pdf city_texconf.xdv
	${XDVIPDFMX} -s 1 -o city_texconf-01.pdf city_texconf.xdv
	${XDVIPDFMX} -s 2 -o city_texconf-02.pdf city_texconf.xdv
	${XDVIPDFMX} -s 3 -o city_texconf-03.pdf city_texconf.xdv
	pdfcrop --margins 10 city_texconf-03.pdf

city_texconf-03-cropa.pdf:
	pdfcrop --margins "10 10 10 -260" city_texconf-03.pdf city_texconf-03-cropa.pdf


city0.ind:
	$(UPMENDEX) city0 -s mlg0.ist

city0.pdf:
	xelatex city0.tex
	xelatex city0.tex
	$(UPMENDEX) city0 -s mlg0.ist
	xelatex city0.tex
	xelatex -no-pdf city0.tex
	${XDVIPDFMX} -s 3 -o city0-03.pdf city0.xdv
	pdfcrop --margins 10 city0-03.pdf

city1.ind:
	$(UPMENDEX) city1 -s mlg1.ist

city1.dvi:
	uplatex city1.tex
	uplatex city1.tex
	$(UPMENDEX) city1 -s mlg1.ist
	uplatex city1.tex

city1.pdf:
	$(DVIPDFMX) city1.dvi
	$(DVIPDFMX) -s 3 -o city1-03.pdf city1.dvi
	pdfcrop --margins 10 city1-03.pdf
