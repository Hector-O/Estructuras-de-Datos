listaC.o:	listaC.c
	gcc listaC.c -c

main.o:	main.c
	gcc main.c -c

a.out: main.o listaC.o
	gcc main.o listaC.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o listaC.o
