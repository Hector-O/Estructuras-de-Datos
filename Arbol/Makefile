Arbol.o:	Arbol.c
	gcc Arbol.c -c

main.o: main.c
	gcc main.c -c

a.out: main.o Arbol.o
	gcc main.o Arbol.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o Arbol.o
