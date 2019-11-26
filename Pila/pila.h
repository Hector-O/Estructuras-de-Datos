/*
	Definición de la estructura pila y las funciones para usar la estructura de dato.

	El uso de memoria de esta pila es dinámica, 
*/

#ifndef __LISTA_L__
#define __LISTA_L__

#include <stdio.h>
#include <stdlib.h>
struct pila
{
  int dato;
  struct pila *siguiente;
};

struct pila *push (struct pila *, int);
void mostrarPila (struct pila);
struct pila *pop (struct pila *);
struct pila *quitarDePila (struct pila);

#endif
