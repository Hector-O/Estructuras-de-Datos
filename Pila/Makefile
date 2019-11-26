pila.o:	pila.c
	gcc pila.c -c

main.o:	main.c
	gcc main.c -c

a.out: main.o pila.o
	gcc main.o pila.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o pila.o
