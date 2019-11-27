/*
	Definición de la structura lista contigua y las funciones para usar la estructura de dato.

	El uso de memoria de esta lista es dinámica, 
	y cree logaritmicamente a meidad de que se necesita.
*/

#ifndef __LISTA_C__
#define __LISTA_C__

#include<stdio.h>
#include<stdlib.h>

struct listaC
{
  int *datos;
  int tamanno;
  int cuantos;
};

struct listaC *asignarMemoria (struct listaC *);
struct listaC *insertar (struct listaC *, int);
void mostrar (struct listaC *);
struct listaC *borrar (struct listaC *, int);
int buscar (struct listaC *, int);
struct listaC *quitarMemoria (struct listaC *);

#endif
