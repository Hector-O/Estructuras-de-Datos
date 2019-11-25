/*
	Definición de la structura listaLigadaDoble y las funciones para usar la estructura de dato.

	El uso de memoria de esta lista es dinámica, 
	además permite utilizar espacios de memoria pequeños y facilita el acceso a los datos
*/


#ifndef __LISTALD_H__
#define __LISTALD_H__

#include<stdio.h>
#include<stdlib.h>

struct listaLigadaDoble
{
  int dato;
  struct listaLigadaDoble *siguiente;
  struct listaLigadaDoble *anterior;
};

struct listaLigadaDoble *insertarListaLDoble (struct listaLigadaDoble *, int);
void mostrarListaLDoble (struct listaLigadaDoble *);
void mostrarListaLDobleAlReves (struct listaLigadaDoble *);
struct listaLigadaDoble *buscarListaLDoble (struct listaLigadaDoble *, int);
struct listaLigadaDoble *borrarDatoListaLDoble (struct listaLigadaDoble *,
						int);

#endif
