/*
	Definición de la tabla hash abierda con lista ligada simple y las funciones para usar la estructura de dato.

	El uso de memoria de esta lista es dinámica, la velocidad de respuesta es constante
	a costa de gran cantidad de memoria.
*/

#ifndef __HASH_A__
#define __HASH_A__

#include <stdlib.h>
#include <stdio.h>
#include "listaLigada.h"

struct tHash
{
  struct listaLigada *datos[100];  /**********AQUI SE CAMBIA TAM***********/
};

int fHash (int);
struct tHash *insertarTabla (struct tHash *, int);
void mostrarTabla (struct tHash *);
struct listaLigada *buscarListaTabla (struct tHash *, int);
struct tHash *borrarTabla (struct tHash *, int dato);


#endif