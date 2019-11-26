#include "Fila.h"

struct FilaDeBanco *
insertarFila (struct FilaDeBanco *Fila, int n)
{
  if (Fila == NULL)
    {
      struct FilaDeBanco *nuevo = NULL;
      nuevo = (struct FilaDeBanco *) malloc (sizeof (struct FilaDeBanco));	//crea nodo inicial
      nuevo->dato = n;
      nuevo->siguiente = nuevo;
      nuevo->anterior = nuevo;
      return nuevo;
    }


  struct FilaDeBanco *nuevo = NULL;
  nuevo = (struct FilaDeBanco *) malloc (sizeof (struct FilaDeBanco));	//crea nodo
  struct FilaDeBanco *ultimo = NULL;
  ultimo = Fila->anterior;

  nuevo->dato = n;
  nuevo->siguiente = Fila;
  nuevo->anterior = ultimo;

  ultimo->siguiente = nuevo;
  Fila->anterior = nuevo;

  return Fila;

}


void
mostrarFila (struct FilaDeBanco *Fila)
{
  if (Fila == NULL)
    {
      printf ("La fila esta vacia \n");
      return;
    }
  else
    {
      puts ("en la fila hay: ");
      struct FilaDeBanco *aux = Fila;

      do
	{
	  printf ("%d,", aux->dato);
	  aux = aux->siguiente;
	}
      while (aux != Fila);

    }
  puts ("");
}


struct FilaDeBanco *
quitarFila (struct FilaDeBanco *Fila)
{
  if (Fila == NULL)
    {
      return NULL;
    }
  if (Fila->siguiente == Fila)
    {
      free (Fila);
      return NULL;
    }

  struct FilaDeBanco *segundo = Fila->siguiente;
  struct FilaDeBanco *ultimo = Fila->anterior;

  segundo->anterior = ultimo;
  ultimo->siguiente = segundo;

  free (Fila);
  return segundo;
}
