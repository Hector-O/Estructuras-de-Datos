#include "listaC.h"

struct listaC *
insertar (struct listaC *inicio, int dato)
{
  if (inicio == NULL)
    {
      struct listaC *nuevo = NULL;
      nuevo = asignarMemoria (inicio);
      *(nuevo->datos) = dato;
      nuevo->cuantos = 1;
      return nuevo;
    }

  if (inicio->cuantos + 1 > inicio->tamanno)
    {
      struct listaC *nuevo = NULL;
      nuevo = asignarMemoria (inicio);
      nuevo->cuantos = 0;

      for (int i = 0; i < inicio->cuantos; i++)
	{
	  *(nuevo->datos + i) = *(inicio->datos + i);
	}

      *(nuevo->datos + inicio->cuantos) = dato;
      nuevo->cuantos = inicio->cuantos + 1;
      free (inicio);
      return nuevo;
    }

  if (inicio->cuantos < inicio->tamanno)
    {
      *(inicio->datos + inicio->cuantos) = dato;
      inicio->cuantos++;
      return inicio;
    }
}

struct listaC *
asignarMemoria (struct listaC *inicio)
{
  if (inicio == NULL)
    {
      struct listaC *nuevo = NULL;
      nuevo = (struct listaC *) malloc (sizeof (struct listaC));
      nuevo->datos = (int *) malloc (sizeof (int) * 2);
      nuevo->tamanno = 2;
      nuevo->cuantos = 0;
      return nuevo;
    }

  struct listaC *nuevo = NULL;
  nuevo = (struct listaC *) malloc (sizeof (struct listaC));
  nuevo->datos = (int *) malloc (sizeof (int) * inicio->tamanno * 2);
  nuevo->tamanno = inicio->tamanno * 2;
  return nuevo;

}

void
mostrar (struct listaC *inicio)
{
  if (inicio == NULL)
    {
      puts ("No hay lista");
      return;
    }
  printf ("La lista tiene: ");
  for (int i = 0; i < inicio->cuantos; i++)
    {
      printf ("%d, ", *(inicio->datos + i));
    }
  puts ("");
}

struct listaC *
borrar (struct listaC *inicio, int dato)
{
  if (inicio == NULL)
    {
      return NULL;
    }
  int buscado = buscar (inicio, dato);

  if (buscado == -1)
    {
      puts ("No se encontro el dato a borrar");
      return inicio;
    }
  printf ("i tiene: %d\n", buscado);
  for (int i = buscado; i < inicio->cuantos; i++)
    {
      printf ("El dato a copiar es: %d\n", *(inicio->datos + i + 1));
      *(inicio->datos + i) = *(inicio->datos + i + 1);
      printf ("El dato a copiado es: %d\n", *(inicio->datos + i));
    }

  inicio->cuantos--;
  if (inicio->cuantos < inicio->tamanno / 2)
    {
      inicio = quitarMemoria (inicio);
    }
  return inicio;
}

int
buscar (struct listaC *inicio, int dato)
{
  if (inicio == NULL)
    {
      return -1;
    }
  int i = 0;
  for (i; i < inicio->cuantos; i++)
    {
      if (*(inicio->datos + i) == dato)
	{
	  return i;
	}
    }
  return -1;
}

struct listaC *
quitarMemoria (struct listaC *inicio)
{
  if (inicio == NULL)
    {
      return NULL;
    }

  struct listaC *nuevo = NULL;
  nuevo = (struct listaC *) malloc (sizeof (struct listaC));
  nuevo->datos = (int *) malloc (inicio->tamanno / 2);
  nuevo->tamanno = inicio->tamanno / 2;
  nuevo->cuantos = 0;

  for (int i = 0; i < inicio->cuantos; i++)
    {
      //printf("El dato a copiar es: %d", *(inicio->datos + i));
      *(nuevo->datos + i) = *(inicio->datos + i);
      //printf("El dato a copiado es: %d", *(nuevo->datos + i));    
    }
  nuevo->cuantos = inicio->cuantos;

  free (inicio);
  return nuevo;


}
