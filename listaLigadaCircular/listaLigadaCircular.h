/*
	Definición de la estructura listaLigadaCircular y las funciones para usar la estructura de dato.

	El uso de memoria de esta lista es dinámica y 
	la lista es ciclica.
*/
#ifndef __LISTALC_L__
#define __LISTALC_L__

#include<stdio.h>
#include<stdlib.h>
struct listaLigadaC
{
  int dato;
  struct listaLigadaC *siguiente;
};

struct listaLigadaC *insertar (struct listaLigadaC *, int);
void mostrarlistaLigadaC (struct listaLigadaC *);
struct listaLigadaC *buscarlistaLigadaC (struct listaLigadaC *, int);
struct listaLigadaC *buscarAntlistaLigadaC (struct listaLigadaC *, int);
struct listaLigadaC *borrarDatolistaLigadaC (struct listaLigadaC *, int);
struct listaLigadaC *encontrarFinal (struct listaLigadaC *);

#endif
