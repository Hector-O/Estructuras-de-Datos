#include "listaLigadaCircular.h"

int
main ()
{
  struct listaLigadaC *unalista = NULL;
  unalista = insertar (unalista, 1);
  unalista = insertar (unalista, 2);
  unalista = insertar (unalista, 3);
  unalista = insertar (unalista, 4);
  unalista = insertar (unalista, 5);
  unalista = insertar (unalista, 6);
  unalista = insertar (unalista, 7);
  unalista = insertar (unalista, 8);
  unalista = insertar (unalista, 9);
  unalista = insertar (unalista, 10);

  mostrarlistaLigadaC (unalista);
  puts ("");
  borrarDatolistaLigadaC (unalista, 7);
  borrarDatolistaLigadaC (unalista, 123);
  puts ("");
  mostrarlistaLigadaC (unalista);

  return 0;
}
