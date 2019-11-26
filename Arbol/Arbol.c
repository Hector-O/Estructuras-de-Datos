#include "Arbol.h"

struct arbol *
insertarArbol (struct arbol *raiz, int dato)
{
  if (raiz == NULL)
    {
      struct arbol *nuevo = (struct arbol *) malloc (sizeof (struct arbol));
      nuevo->dato = dato;
      nuevo->izq = NULL;
      nuevo->der = NULL;
      return nuevo;
    }
  if (dato < raiz->dato)
    {
      struct arbol *nuevo = insertarArbol (raiz->izq, dato);
      raiz->izq = nuevo;
      return raiz;
    }
  if (dato > raiz->dato)
    {
      struct arbol *nuevo = insertarArbol (raiz->der, dato);
      raiz->der = nuevo;
      return raiz;
    }
  if (dato == raiz->dato)
    {
      return raiz;
    }
}


void
mostrarArbolPRE (struct arbol *raiz)
{
  if (raiz == NULL)
    {
      return;
    }

  printf ("%d\n", raiz->dato);
  mostrarArbolPRE (raiz->izq);
  mostrarArbolPRE (raiz->der);
}

void
mostrarArbolIN (struct arbol *raiz)
{
  if (raiz == NULL)
    {
      return;
    }

  mostrarArbolIN (raiz->izq);
  printf ("%d\n", raiz->dato);
  mostrarArbolIN (raiz->der);
}

void
mostrarArbolPOST (struct arbol *raiz)
{
  if (raiz == NULL)
    {
      return;
    }

  mostrarArbolPOST (raiz->izq);
  mostrarArbolPOST (raiz->der);
  printf ("%d\n", raiz->dato);
}

struct arbol *
buscarArbol (struct arbol *raiz, int dato)
{
  if (raiz == NULL)
    {
      return NULL;
    }
  if (raiz->dato == dato)
    {
      return raiz;
    }

  struct arbol *buscado;

  if (raiz->dato > dato)
    {
      buscado = buscarArbol (raiz->izq, dato);
    }
  else
    {
      buscado = buscarArbol (raiz->der, dato);
    }
  if (buscado != NULL)
    {
      return buscado;
    }
  if (buscado == NULL)
    {
      return NULL;
    }
}


int
esHoja (struct arbol *raiz)
{
  if (raiz->der == NULL && raiz->izq == NULL)
    {
      return 1;
    }
  else
    {
      return 0;
    }

}

struct arbol *
padreDe (struct arbol *raiz, int dato)
{
  if (raiz == NULL)
    {
      return NULL;
    }

  struct arbol *buscado = NULL;
  buscado = buscarArbol (raiz, dato);
  if (buscado == NULL)
    {
      return NULL;
    }

  if ((raiz->izq != NULL && raiz->izq->dato == dato)
      || (raiz->der != NULL && raiz->der->dato == dato))
    {
      return raiz;
    }

  struct arbol *padre = NULL;
  struct arbol *padre2 = NULL;

  if (dato < raiz->dato)
    {
      padre = padreDe (raiz->izq, dato);
    }
  if (dato > raiz->dato)
    {
      padre2 = padreDe (raiz->der, dato);
    }
  if (padre != NULL)
    {
      return padre;
    }
  if (padre2 != NULL)
    {
      return padre2;
    }
  return NULL;

}

struct arbol *
mayorDe (struct arbol *raiz)
{
  if (raiz == NULL)
    {
      return NULL;
    }

  struct arbol *mayor = NULL;

  if (raiz->der != NULL)
    {
      mayor = mayorDe (raiz->der);
    }
  else
    {
      return raiz;
    }
  return mayor;
}

struct arbol *
menorDe (struct arbol *raiz)
{
  if (raiz == NULL)
    {
      return NULL;
    }

  struct arbol *menor = NULL;

  if (raiz->izq != NULL)
    {
      menor = menorDe (raiz->izq);
    }
  else
    {
      return raiz;
    }
  return menor;
}

struct arbol *
eliminarRaizDeArbol (struct arbol *raiz)
{
  if (raiz == NULL)
    {
      return NULL;
    }

  if (esHoja (raiz))
    {
      free (raiz);
      return NULL;
    }

  struct arbol *mayor = NULL;
  mayor = mayorDe (raiz->izq);

  if (mayor != NULL)
    {

      struct arbol *padreDeMayor = NULL;
      padreDeMayor = padreDe (raiz, mayor->dato);

      if (esHoja (mayor))
	{
	  if (raiz->izq->dato == mayor->dato)
	    {
	      mayor->der = raiz->der;
	      free (raiz);
	      return mayor;
	    }
	  else
	    {
	      padreDeMayor->der = mayor->izq;
	      mayor->izq = raiz->izq;
	      mayor->der = raiz->der;
	      free (raiz);
	      return mayor;
	    }
	}
      else
	{
	  if (raiz->izq->dato == mayor->dato)
	    {
	      mayor->der = raiz->der;
	      free (raiz);
	      return mayor;
	    }
	  else
	    {
	      padreDeMayor->der = mayor->izq;
	      mayor->der = raiz->der;
	      mayor->izq = raiz->izq;
	      free (raiz);
	      return mayor;
	    }
	}
    }

  struct arbol *menor = NULL;
  menor = menorDe (raiz->der);

  if (menor != NULL)
    {
      struct arbol *padreDeMenor = NULL;
      padreDeMenor = padreDe (raiz, menor->dato);

      if (esHoja (menor))
	{
	  if (raiz->der->dato == menor->dato)
	    {
	      menor->izq = raiz->izq;
	      free (raiz);
	      return menor;
	    }
	  else
	    {
	      padreDeMenor->izq = menor->der;
	      menor->izq = raiz->izq;
	      menor->der = raiz->der;
	      free (raiz);
	      return menor;
	    }
	}
      else
	{
	  if (raiz->der->dato == menor->dato)
	    {
	      menor->izq = raiz->izq;
	      free (raiz);
	      return menor;
	    }
	  else
	    {
	      padreDeMenor->izq = menor->der;
	      menor->izq = raiz->izq;
	      menor->der = raiz->der;
	      free (raiz);
	      return menor;
	    }
	}
    }
}


struct arbol *
eliminarDeArbol (struct arbol *raiz, int dato)
{
  if (raiz == NULL)
    {
      return NULL;
    }

  if (raiz->dato == dato)
    {
      return eliminarRaizDeArbol (raiz);
    }

  struct arbol *buscado = NULL;
  buscado = buscarArbol (raiz, dato);
  if (buscado == NULL)
    {
      return raiz;
    }


  struct arbol *padreDeBuscado = NULL;
  padreDeBuscado = padreDe (raiz, buscado->dato);
  if (padreDeBuscado == NULL)
    {
      return NULL;
    }

  if (padreDeBuscado->dato > buscado->dato)
    {
      padreDeBuscado->izq = eliminarRaizDeArbol (buscado);
      return raiz;
    }

  if (padreDeBuscado->dato < buscado->dato)
    {
      padreDeBuscado->der = eliminarRaizDeArbol (buscado);
      return raiz;
    }

}
