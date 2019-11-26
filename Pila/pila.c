#include "pila.h"

struct pila *
push (struct pila *PILA, int n)
{
  if (PILA == NULL)
    {
      struct pila *nuevo = NULL;
      nuevo = (struct pila *) malloc (sizeof (struct pila));
      nuevo->dato = n;
      nuevo->siguiente = NULL;
      return nuevo;
    }

  struct pila *nuevo = NULL;
  nuevo = (struct pila *) malloc (sizeof (struct pila));

  nuevo->dato = n;
  nuevo->siguiente = PILA;
  return nuevo;

}

void
mostrarPila (struct pila PILA)
{
  if (&PILA == NULL)
    {
      printf ("La pila esta vacia\n");
      return;
    }

  struct pila *aux = NULL;
  aux = &PILA;
  struct pila *cont = NULL;

  printf ("La pila tiene: ");
  do
    {
      cont = quitarDePila (*aux);
      printf ("%d, ", cont->dato);
      aux = aux->siguiente;
    }
  while (aux != NULL);
  puts ("");
}


struct pila *
pop (struct pila *PILA)
{
  if (PILA == NULL)
    {
      return NULL;
    }

  if (PILA->siguiente == NULL)
    {
      free (PILA);
      return NULL;
    }

  struct pila *siguiente = NULL;
  siguiente = PILA->siguiente;

  free (PILA);
  return siguiente;
}

struct pila *
quitarDePila (struct pila PILA)
{
  if (&PILA == NULL)
    {
      return NULL;
    }

  struct pila *inicio = NULL;
  inicio = (struct pila *) malloc (sizeof (struct pila));

  inicio->dato = PILA.dato;
  inicio->siguiente = NULL;

  return inicio;
}
