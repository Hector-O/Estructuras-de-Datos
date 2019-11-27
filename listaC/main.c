#include "listaC.h"

int
main ()
{
  struct listaC *lista = NULL;
  lista = insertar (lista, 11);
  lista = insertar (lista, 22);
  puts ("se mostró hasta 2");
  mostrar (lista);
  puts ("");
  lista = insertar (lista, 33);
  puts ("se mostrara hasta 3");
  mostrar (lista);
  puts ("");
  lista = insertar (lista, 44);
  lista = insertar (lista, 55);
  lista = insertar (lista, 66);
  lista = insertar (lista, 77);
  lista = insertar (lista, 88);

  mostrar (lista);

  lista = borrar (lista, 77);
  lista = borrar (lista, 66);
  lista = borrar (lista, 55);
  lista = borrar (lista, 44);
  lista = borrar (lista, 22);

  mostrar (lista);

  return 0;
}
