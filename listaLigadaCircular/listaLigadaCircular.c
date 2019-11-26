#include "listaLigadaCircular.h"

struct listaLigadaC *
insertar (struct listaLigadaC *listaLC, int n)
{
  if (listaLC == NULL)
    {
      struct listaLigadaC *nuevo = NULL;
      nuevo = (struct listaLigadaC *) malloc (sizeof (struct listaLigadaC));	//crea nodo inicial
      nuevo->dato = n;
      nuevo->siguiente = nuevo;
      return nuevo;
    }

  struct listaLigadaC *nuevo = NULL;
  nuevo = (struct listaLigadaC *) malloc (sizeof (struct listaLigadaC));	//crea nodo
  nuevo->dato = n;
  nuevo->siguiente = listaLC;

  struct listaLigadaC *ultimo = NULL;
  ultimo = encontrarFinal (listaLC);
  ultimo->siguiente = nuevo;
  return nuevo;

}


void
mostrarlistaLigadaC (struct listaLigadaC *listaLC)
{
  if (listaLC == NULL)
    {
      printf ("La lista esta vacia");
      return;
    }

  struct listaLigadaC *fijo = listaLC;
  struct listaLigadaC *aux = listaLC->siguiente;

  printf ("La lista tiene: %d \n", listaLC->dato);
  while (aux != fijo)
    {				//si lista no esta vacia
      printf ("La lista tiene: %d \n", aux->dato);
      aux = aux->siguiente;
    };
}


struct listaLigadaC *
buscarlistaLigadaC (struct listaLigadaC *listaLC, int n)
{
  if (listaLC == NULL)
    {
      return NULL;
    }
  if (n == listaLC->dato)
    {
      return listaLC;		//si se encuentra el dato
    }

  struct listaLigadaC *fijo = NULL;
  fijo = listaLC;
  listaLC = listaLC->siguiente;

  while (listaLC != fijo)
    {
      if (n == listaLC->dato)
	{
	  return listaLC;	//si se encuentra el dato
	}
      listaLC = listaLC->siguiente;
    }

  return NULL;			//si no se encuentra el dato
}



struct listaLigadaC *
borrarDatolistaLigadaC (struct listaLigadaC *listaLC, int n)
{
  printf ("Se va a borrar: %d\n", n);
  struct listaLigadaC *buscado = NULL;
  buscado = buscarlistaLigadaC (listaLC, n);

  if (buscado == NULL)
    {
      printf ("No se encontro el dato a borrar");
      return listaLC;
    }

  struct listaLigadaC *siguiente = NULL;
  siguiente = buscado->siguiente;
  struct listaLigadaC *anterior = NULL;
  anterior = buscarAntlistaLigadaC (listaLC, n);

  anterior->siguiente = siguiente;
  free (buscado);
  return listaLC;
}


struct listaLigadaC *
encontrarFinal (struct listaLigadaC *listaLC)
{
  if (listaLC == NULL)
    {
      return NULL;
    }

  if (listaLC->siguiente->dato == listaLC->dato)
    {
      return listaLC;
    }

  struct listaLigadaC *fijo = listaLC;
  struct listaLigadaC *aux = listaLC->siguiente;

  while (aux != fijo)
    {
      if (aux->siguiente == fijo)
	{
	  return aux;
	}
      aux = aux->siguiente;
    };

  return NULL;
}

struct listaLigadaC *
buscarAntlistaLigadaC (struct listaLigadaC *listaLC, int n)
{
  if (listaLC == NULL)
    {
      return NULL;
    }

  struct listaLigadaC *fijo = NULL;
  fijo = listaLC;
  struct listaLigadaC *aux = NULL;
  aux = listaLC->siguiente;

  while (aux != fijo)
    {
      if (aux->siguiente->dato == n)
	{
	  return aux;
	}
      aux = aux->siguiente;
    };

  return NULL;
}
