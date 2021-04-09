fileName = *.l
all:
	flex $(fileName)
	gcc -lfl lex.yy.c
	mv a.out demo
run:
	./demo
clean:
	rm -f demo lex.yy.c
