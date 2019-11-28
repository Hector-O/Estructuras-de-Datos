#include "listaLigada.h"

struct listaLigada *
insertarListaL (struct listaLigada *LISTAL, int n)
{
  if (LISTAL == NULL)
    {
      struct listaLigada *nuevo = (struct listaLigada *) malloc (sizeof (struct listaLigada));	//crea nodo inicial
      nuevo->dato = n;
      nuevo->siguiente = NULL;
      return nuevo;
    }
  struct listaLigada *nuevo = (struct listaLigada *) malloc (sizeof (struct listaLigada));	//crea nodo
  nuevo->dato = n;
  nuevo->siguiente = LISTAL;
  return nuevo;

}

struct listaLigada *
insertarFinalListaL (struct listaLigada *LISTAL, int n)
{
  struct listaLigada *aux = LISTAL;
  if (LISTAL == NULL)
    {
      struct listaLigada *nuevo = (struct listaLigada *) malloc (sizeof (struct listaLigada));	//crea nodo nuevo
      nuevo->dato = n;
      nuevo->siguiente = NULL;
      return nuevo;
    }
  struct listaLigada *nuevo = (struct listaLigada *) malloc (sizeof (struct listaLigada));	//crea nodo   

  while (LISTAL->siguiente != NULL)
    {
      LISTAL = LISTAL->siguiente;
    };
  nuevo->dato = n;
  nuevo->siguiente = NULL;
  LISTAL->siguiente = nuevo;
  return aux;
}

void
mostrarListaL (struct listaLigada *LISTAL)
{
  if (LISTAL == NULL)
    {
      printf ("La lista esta vacia");
      return;
    }
  while (LISTAL != NULL)
    {				//si lista no esta vacia
      printf ("%d, ", LISTAL->dato);
      LISTAL = LISTAL->siguiente;
    };
}

struct listaLigada *
buscarListaL (struct listaLigada *LISTAL, int n)
{
  if (LISTAL == NULL)
    {
      return NULL;
    }
  while (LISTAL != NULL)
    {
      if (n == LISTAL->dato)
	{
	  return LISTAL;	//si se encuentra el dato
	}
      LISTAL = LISTAL->siguiente;
    }
  return NULL;			//si no se encuentra el dato
}

struct listaLigada *
buscarAntListaL (struct listaLigada *LISTAL, int n)
{
  if (LISTAL == NULL)
    {
      return NULL;
    }

  struct listaLigada *buscado = NULL;
  buscado = buscarListaL (LISTAL, n);

  if (buscado == NULL)
    {
      return NULL;		//si no se encontro
    }

  if (LISTAL->dato == n)
    {
      puts ("enviaste el inico");
      return NULL;		//si es el principio de la lista
    }


  while (LISTAL != NULL)
    {
      if (LISTAL->siguiente->dato == n)
	{
	  return LISTAL;	//si se encontro anterior
	}
      LISTAL = LISTAL->siguiente;
    }
  return NULL;			//     Si El dato anterior no se encontro 
}




struct listaLigada *
borrarDatoListaL (struct listaLigada *LISTAL, int n)
{
  if (LISTAL == NULL)
    {
      return NULL;
    }
  struct listaLigada *buscado = NULL;
  buscado = buscarListaL (LISTAL, n);

  if (buscado == NULL)
    {
      printf ("No se encontro el dato a borrar");
      return LISTAL;
    }
  printf ("Se va a borrar: %d\n", n);

  struct listaLigada *siguiente = NULL;
  siguiente = buscado->siguiente;

  if (LISTAL->dato == n)
    {
      free (LISTAL);
      return siguiente;
    }

  struct listaLigada *anterior = NULL;
  anterior = buscarAntListaL (LISTAL, n);

  anterior->siguiente = siguiente;
  free (buscado);
  return LISTAL;
}
