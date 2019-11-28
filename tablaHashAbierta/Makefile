tHash.o: tHash.c listaLigada.c
	gcc tHash.c listaLigada.c -c

main.o: main.c
	gcc main.c -c

a.out: main.o tHash.o listaLigada.o
	gcc main.o tHash.o listaLigada.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o tHash.o listaLigada.o
