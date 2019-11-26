listaLigadaCircular.o:	listaLigadaCircular.c
	gcc listaLigadaCircular.c -c

main.o:	main.c
	gcc main.c -c

a.out: main.o listaLigadaCircular.o
	gcc main.o listaLigadaCircular.o

run: a.out
	./a.out

clean: 
	rm -f a.out main.o listaLigadaCircular.o
