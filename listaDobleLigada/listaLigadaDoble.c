#include "listaLigadaDoble.h"

struct listaLigadaDoble *
insertarListaLDoble (struct listaLigadaDoble *LISTAL, int n)
{
  if (LISTAL == NULL)
    {
      struct listaLigadaDoble *nuevo = (struct listaLigadaDoble *) malloc (sizeof (struct listaLigadaDoble));	//crea nodo inicial
      nuevo->dato = n;
      nuevo->siguiente = NULL;
      nuevo->anterior = NULL;
      return nuevo;
    }
  struct listaLigadaDoble *nuevo = NULL;	//crea nodo
  nuevo =
    (struct listaLigadaDoble *) malloc (sizeof (struct listaLigadaDoble));

  nuevo->dato = n;
  nuevo->siguiente = LISTAL;
  nuevo->anterior = NULL;
  LISTAL->anterior = nuevo;
  return nuevo;

}


void
mostrarListaLDoble (struct listaLigadaDoble *LISTAL)
{
  if (LISTAL == NULL)
    {
      printf ("La lista esta vacia");
      return;
    }
  printf ("La lista tiene: ");
  while (LISTAL != NULL)	//si lista no esta vacia
    {
      printf ("%d, ", LISTAL->dato);
      LISTAL = LISTAL->siguiente;
    };
  puts ("");
}

struct listaLigadaDoble *
buscarListaLDoble (struct listaLigadaDoble *LISTAL, int n)
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


struct listaLigadaDoble *
borrarDatoListaLDoble (struct listaLigadaDoble *LISTAL, int n)
{
  if (LISTAL == NULL)
    {
      return NULL;
    }

  if (LISTAL->dato == n)
    {
      struct listaLigadaDoble *siguiente = NULL;
      siguiente = LISTAL->siguiente;
      siguiente->anterior = NULL;
      free (LISTAL);
      return siguiente;
    }

  struct listaLigadaDoble *buscado = NULL;
  buscado = buscarListaLDoble (LISTAL, n);
  if (buscado == NULL)
    {
      printf ("No se encontro el dato a borrar");
      return LISTAL;
    }
  printf ("Se va a borrar: %d\n", n);

  struct listaLigadaDoble *siguiente = NULL;
  siguiente = buscado->siguiente;
  struct listaLigadaDoble *anterior = NULL;
  anterior = buscado->anterior;

  if (siguiente == NULL || anterior == NULL)
    {
      return NULL;
    }

  anterior->siguiente = siguiente;

  siguiente->anterior = anterior;

  free (buscado);
  return LISTAL;
}

void
mostrarListaLDobleAlReves (struct listaLigadaDoble *LISTAL)
{
  if (LISTAL == NULL)
    {
      return;
    }

  printf ("La lista Al reves: ");
  while (LISTAL->siguiente != NULL)
    {
      LISTAL = LISTAL->siguiente;
    };

  do
    {
      printf ("%d, ", LISTAL->dato);
      LISTAL = LISTAL->anterior;
    }
  while (LISTAL->anterior != NULL);
  printf ("%d \n", LISTAL->dato);

}
