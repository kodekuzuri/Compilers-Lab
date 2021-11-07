assembly: tinyC libassgn6.a
	./tinyC test1.c > test1_quads1.out
	# ./tinyC test2.c > test2_quads1.out
	# ./tinyC test3.c > test3_quads1.out
	# ./tinyC test4.c > test4_quads1.out
	# ./tinyC test5.c > test5_quads1.out

	gcc -c test1.s
	# gcc -c test2.s
	# gcc -c test3.s
	# gcc -c test4.s
	# gcc -c test5.s

	gcc test1.o -o test1 -L. -lassgn6 -no-pie
	# gcc test2.o -o test2 -L. -lassgn6 -no-pie
	# gcc test3.o -o test3 -L. -lassgn6 -no-pie
	# gcc test4.o -o test4 -L. -lassgn6 -no-pie
	# gcc test5.o -o test5 -L. -lassgn6 -no-pie
	


libassgn6.a: assgn6_19CS30033_19CS30036.c myl.h
	gcc -c assgn6_19CS30033_19CS30036.c
	ar -rcs libassgn6.a assgn6_19CS30033_19CS30036.o 

tinyC: lex.yy.o assgn6_19CS30033_19CS30036.tab.o assgn6_19CS30033_19CS30036_translator.o assgn6_19CS30033_19CS30036_target_translator.o
	g++ lex.yy.o assgn6_19CS30033_19CS30036.tab.o assgn6_19CS30033_19CS30036_translator.o assgn6_19CS30033_19CS30036_target_translator.o -lfl -o tinyC

assgn6_19CS30033_19CS30036_target_translator.o : assgn6_19CS30033_19CS30036_target_translator.cxx
	g++ -c assgn6_19CS30033_19CS30036_target_translator.cxx

assgn6_19CS30033_19CS30036_translator.o: assgn6_19CS30033_19CS30036_translator.cxx assgn6_19CS30033_19CS30036_translator.h
	g++ -c assgn6_19CS30033_19CS30036_translator.h
	g++ -c assgn6_19CS30033_19CS30036_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

assgn6_19CS30033_19CS30036.tab.o: assgn6_19CS30033_19CS30036.tab.c
	g++ -c assgn6_19CS30033_19CS30036.tab.c

lex.yy.c: assgn6_19CS30033_19CS30036.l assgn6_19CS30033_19CS30036.tab.h assgn6_19CS30033_19CS30036_translator.h
	flex assgn6_19CS30033_19CS30036.l

assgn6_19CS30033_19CS30036.tab.c: assgn6_19CS30033_19CS30036.y
	bison -dtv assgn6_19CS30033_19CS30036.y -W

assgn6_19CS30033_19CS30036.tab.h: assgn6_19CS30033_19CS30036.y
	bison -dtv assgn6_19CS30033_19CS30036.y -W

clean:
	rm lex.yy.c lex.yy.o tinyC assgn6_19CS30033_19CS30036.tab.c \
	assgn6_19CS30033_19CS30036.tab.h assgn6_19CS30033_19CS30036.tab.o \
	assgn6_19CS30033_19CS30036_translator.o assgn6_19CS30033_19CS30036_translator.h.gch \
	assgn6_19CS30033_19CS30036.o assgn6_19CS30033_19CS30036_target_translator.o \
	libassgn6.a test1.s test1.o test1_quads1.out assgn6_19CS30033_19CS30036.output
