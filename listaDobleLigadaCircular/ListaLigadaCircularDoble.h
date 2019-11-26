/*
	Definición de la estructura listaLigadaCircularDoble y las funciones para usar la estructura de dato.

	El uso de memoria de esta lista es dinámica, 
	además permite utilizar espacios de memoria pequeños y 
	facilita el acceso a los datos permitiendo usar el dato anterior con más facilidad
*/


#ifndef __LISTALCD_L__
#define __LISTALCD_L__

#include<stdio.h>
#include<stdlib.h>

struct listaLigadaCircularDoble
{
  int dato;
  struct listaLigadaCircularDoble *siguiente;
  struct listaLigadaCircularDoble *anterior;
};

struct listaLigadaCircularDoble *insertarListaLCD (struct
						   listaLigadaCircularDoble *,
						   int);
void mostrarListaLCD (struct listaLigadaCircularDoble *);
struct listaLigadaCircularDoble *buscarListaLCD (struct
						 listaLigadaCircularDoble *,
						 int);
struct listaLigadaCircularDoble *borrarDatoListaLCD (struct
						     listaLigadaCircularDoble
						     *, int);

#endif
