all: main.tex
	xelatex main.tex
	xelatex main.tex

open: all
	open main.pdf

clean:
	rm -f *.aux *.log *.out *.nav *.snm *.toc *.vrb

cleanall: clean
	rm -f *.pdf
