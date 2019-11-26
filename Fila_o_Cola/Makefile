Fila.o:	Fila.c
	gcc Fila.c -c

main.o: main.c
	gcc main.c -c

a.out: main.o Fila.o
	gcc main.o Fila.o

run: a.out
	./a.out

clean:
	rm -f a.out main.o Fila.o
