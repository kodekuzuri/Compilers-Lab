a.out: lex.yy.o assgn5_19CS30033_19CS30036.tab.o assgn5_19CS30033_19CS30036_translator.o
	g++ lex.yy.o assgn5_19CS30033_19CS30036.tab.o assgn5_19CS30033_19CS30036_translator.o -lfl

assgn5_19CS30033_19CS30036_translator.o: assgn5_19CS30033_19CS30036_translator.cxx assgn5_19CS30033_19CS30036_translator.h
	g++ -c assgn5_19CS30033_19CS30036_translator.h
	g++ -c assgn5_19CS30033_19CS30036_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

assgn5_19CS30033_19CS30036.tab.o: assgn5_19CS30033_19CS30036.tab.c
	g++ -c assgn5_19CS30033_19CS30036.tab.c

lex.yy.c: assgn5_19CS30033_19CS30036.l assgn5_19CS30033_19CS30036.tab.h assgn5_19CS30033_19CS30036_translator.h
	flex assgn5_19CS30033_19CS30036.l

assgn5_19CS30033_19CS30036.tab.c: assgn5_19CS30033_19CS30036.y
	bison -dtv assgn5_19CS30033_19CS30036.y -W

assgn5_19CS30033_19CS30036.tab.h: assgn5_19CS30033_19CS30036.y
	bison -dtv assgn5_19CS30033_19CS30036.y -W

clean:
	rm lex.yy.c lex.yy.o a.out  assgn4_19CS30033_19CS30036.tab.c \
	assgn5_19CS30033_19CS30036.tab.h assgn5_19CS30033_19CS30036.tab.o \
	assgn5_19CS30033_19CS30036_translator.o assgn5_19CS30033_19CS30036_translator.h.gch