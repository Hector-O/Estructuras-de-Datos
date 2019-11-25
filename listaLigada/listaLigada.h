/*
	Definición de la structura listaLigada y las funciones para usar la estructura de dato.

	El uso de memoria de esta lista es dinámica, 
	además permite utilizar espacios de memoria pequeños a diferencia de la lista contigua.
*/

#ifndef __LISTA_L__
#define __LISTA_L__

#include<stdio.h>
#include<stdlib.h>
struct listaLigada
{
  int dato;
  struct listaLigada *siguiente;
};

struct listaLigada *insertarListaL (struct listaLigada *, int);
struct listaLigada *insertarFinalListaL (struct listaLigada *, int);
void mostrarListaL (struct listaLigada *);
struct listaLigada *buscarListaL (struct listaLigada *, int);
struct listaLigada *buscarAntListaL (struct listaLigada *, int);
struct listaLigada *borrarDatoListaL (struct listaLigada *, int);

#endif
