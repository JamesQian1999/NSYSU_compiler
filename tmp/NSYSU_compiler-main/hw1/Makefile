CC= gcc
CXX= g++
LEX= flex

SOURCE= B073040047.l
all: clean lex
	${CXX} lex.o lib/libsymbol_table.a -lfl -o my_lex.elf

clean:
	rm -rf lib/build lex.o my_lex.elf lex.c

lex: ${SOURCE}
	${LEX} -o lex.c ${SOURCE}
	${CC} -c lex.c

test: all
	./my_lex.elf < TestFile_Lab1_2021/Test1.java
	./my_lex.elf < TestFile_Lab1_2021/Test2.java
	./my_lex.elf < TestFile_Lab1_2021/Test3.java