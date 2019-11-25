listaLigadaDoble.o:	listaLigadaDoble.c
	gcc listaLigadaDoble.c -c

main.o:	main.c
	gcc main.c -c

a.out:	main.o listaLigadaDoble.o
	gcc main.c listaLigadaDoble.o

run: a.out
	./a.out

clean: 
	rm -f a.out main.o listaLigadaDoble.o
