/*
	Definición de la structura arbol y las funciones para usar la estructura de dato.

	El uso de memoria de esta lista es dinámica, 
	permite localizar datos de manera rápida sin requerir mucha memoria.
*/

#ifndef __ARBOL_H_
#define __ARBOL_H_

#include<stdio.h>
#include<stdlib.h>

struct arbol
{
  int dato;
  struct arbol *izq;
  struct arbol *der;
};

struct arbol *insertarArbol (struct arbol *, int);
void mostrarArbolPRE (struct arbol *);
void mostrarArbolIN (struct arbol *);
void mostrarArbolPOST (struct arbol *);
struct arbol *buscarArbol (struct arbol *, int);
int esHoja (struct arbol *);
struct arbol *padreDe (struct arbol *, int);
struct arbol *mayorDe (struct arbol *);
struct arbol *menorDe (struct arbol *);
struct arbol *eliminarRaizDeArbol (struct arbol *);
struct arbol *eliminarDeArbol (struct arbol *, int);

#endif
