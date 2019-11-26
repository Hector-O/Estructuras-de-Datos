/*
	Definición de la estructura fila y las funciones para usar la estructura de dato.

	El uso de memoria de la fila es dinámica, 
	
*/

#ifndef __FILA_H__
#define __FILA_H__

#include <stdio.h>
#include <stdlib.h>


struct FilaDeBanco
{
  int dato;
  struct FilaDeBanco *siguiente;
  struct FilaDeBanco *anterior;
};


struct FilaDeBanco *insertarFila (struct FilaDeBanco *, int);
void mostrarFila (struct FilaDeBanco *);
struct FilaDeBanco *quitarFila (struct FilaDeBanco *);

#endif
