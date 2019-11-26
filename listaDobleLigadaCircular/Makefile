ListaLigadaCircularDoble.o: 	ListaLigadaCircularDoble.c
	gcc ListaLigadaCircularDoble.c -c

main.o: main.c
	gcc main.c -c

a.out:	main.o ListaLigadaCircularDoble.o
	gcc main.c ListaLigadaCircularDoble.o

run: a.out
	./a.out

clean: 
	rm -f a.out main.o ListaLigadaCircularDoble.o
