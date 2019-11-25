listaLigada.o:	listaLigada.c
	gcc listaLigada.c -c

main.o:	main.c
	gcc main.c -c

a.out: main.o listaLigada.o
	gcc main.o listaLigada.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o listaLigada.o
