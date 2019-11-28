#include "tHash.h"


int
fHash (int dato)
{
  return abs (((dato * 11) * 65101) % 100);
				      /**********AQUI SE CAMBIA TAM (el num a la derecha del modulo)***********/
}

struct tHash *
insertarTabla (struct tHash *tabla, int dato)
{
  if (tabla == NULL)
    {
      int clave = 0;
      struct tHash *nueva = NULL;

      clave = fHash (dato);
      nueva = (struct tHash *) malloc (sizeof (struct tHash));

      nueva->datos[clave] = insertarListaL (nueva->datos[clave], dato);
      return nueva;
    }

  int clave = fHash (dato);

  tabla->datos[clave] = insertarListaL (tabla->datos[clave], dato);
  return tabla;
}

void
mostrarTabla (struct tHash *tabla)
{
  if (tabla == NULL)
    {
      puts ("No hay tabla");
      return;
    }

  printf ("La tabla tiene: \n");

  int i = 0;
  while (i < 100)      /**********AQUI SE CAMBIA TAM***********/
    {
      if (tabla->datos[i] != NULL)
	{
	  printf ("Una lista tiene: ");
	  mostrarListaL (tabla->datos[i]);
	  puts ("");
	}
      i++;
    }
}

struct listaLigada *
buscarListaTabla (struct tHash *tabla, int dato)
{
  if (tabla == NULL)
    {
      return NULL;
    }
  int clave = 0;
  clave = fHash (dato);
  struct listaLigada *buscadoL = NULL;
  buscadoL = buscarListaL (tabla->datos[clave], dato);
  if (buscadoL == NULL)
    {
      return NULL;
    }

  return tabla->datos[clave];
}


struct tHash *
borrarTabla (struct tHash *tabla, int dato)
{
  if (tabla == NULL)
    {
      return NULL;
    }

  int clave = 0;
  clave = fHash (dato);
  struct listaLigada *buscadoL = NULL;
  buscadoL = buscarListaTabla (tabla, dato);

  if (buscadoL == NULL)
    {
      return NULL;
    }

  tabla->datos[clave] =
    borrarDatoListaL (tabla->datos[clave], buscadoL->dato);
  return tabla;
}
