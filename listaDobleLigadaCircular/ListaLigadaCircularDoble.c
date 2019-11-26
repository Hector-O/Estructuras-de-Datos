#include "ListaLigadaCircularDoble.h"

struct listaLigadaCircularDoble *
insertarListaLCD (struct listaLigadaCircularDoble *listaLCD, int n)
{
  if (listaLCD == NULL)
    {
      struct listaLigadaCircularDoble *nuevo = NULL;
      nuevo = (struct listaLigadaCircularDoble *) malloc (sizeof (struct listaLigadaCircularDoble));	//crea nodo inicial
      nuevo->dato = n;
      nuevo->siguiente = nuevo;
      nuevo->anterior = nuevo;
      return nuevo;
    }

  struct listaLigadaCircularDoble *nuevo = NULL;
  nuevo = (struct listaLigadaCircularDoble *) malloc (sizeof (struct listaLigadaCircularDoble));	//crea nodo

  nuevo->dato = n;
  nuevo->siguiente = listaLCD;
  nuevo->anterior = listaLCD->anterior;

  listaLCD->anterior->siguiente = nuevo;
  listaLCD->anterior = nuevo;

  return nuevo;
}


void
mostrarListaLCD (struct listaLigadaCircularDoble *listaLCD)
{
  if (listaLCD == NULL)
    {
      printf ("La lista esta vacia\n");
      return;
    }

  struct listaLigadaCircularDoble *fijo = NULL;
  fijo = listaLCD;
  struct listaLigadaCircularDoble *aux = NULL;
  aux = listaLCD->siguiente;

  printf ("La lista tiene: %d \n", listaLCD->dato);
  while (aux != fijo)
    {				//si lista no llega a fijo
      printf ("La lista tiene: %d \n", aux->dato);
      aux = aux->siguiente;
    };
}

struct listaLigadaCircularDoble *
buscarListaLCD (struct listaLigadaCircularDoble *listaLCD, int n)
{
  if (listaLCD == NULL)
    {
      return NULL;
    }
  if (listaLCD->dato == n)
    {
      return listaLCD;
    }

  struct listaLigadaCircularDoble *fijo = NULL;
  fijo = listaLCD;
  struct listaLigadaCircularDoble *aux = NULL;
  aux = listaLCD->siguiente;

  while (aux != fijo)
    {
      if (aux->dato == n)
	{
	  return aux;		//si se encuentra el dato
	}
      aux = aux->siguiente;
    }
  return NULL;			//si no se encuentra el dato
}


struct listaLigadaCircularDoble *
borrarDatoListaLCD (struct listaLigadaCircularDoble *listaLCD, int n)
{
  if (listaLCD == NULL)
    {
      return NULL;
    }

  struct listaLigadaCircularDoble *buscado = NULL;
  buscado = buscarListaLCD (listaLCD, n);

  if (buscado == NULL)
    {
      printf ("No se encontro el dato a borrar\n");
      return listaLCD;
    }
  printf ("Se va a borrar: %d\n", n);

  struct listaLigadaCircularDoble *siguiente = NULL;
  siguiente = buscado->siguiente;
  struct listaLigadaCircularDoble *anterior = NULL;
  anterior = buscado->anterior;

  anterior->siguiente = siguiente;
  siguiente->anterior = anterior;
  free (buscado);
  return listaLCD;
}
