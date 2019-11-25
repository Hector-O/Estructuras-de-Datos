#include "listaLigada.h"

int
main ()
{
  struct listaLigada *unalista = NULL, *temp;
  unalista = insertarListaL (unalista, 10);
  unalista = insertarListaL (unalista, 29);
  unalista = insertarListaL (unalista, 12);
  unalista = insertarListaL (unalista, 76);
  unalista = insertarListaL (unalista, 51);
  unalista = insertarListaL (unalista, 68);
  unalista = insertarListaL (unalista, 90);
  unalista = insertarListaL (unalista, 82);
  unalista = insertarListaL (unalista, 91);
  unalista = insertarFinalListaL (unalista, 0);
  unalista = insertarFinalListaL (unalista, -17);

  mostrarListaL (unalista);

  unalista = borrarDatoListaL (unalista, 90);
  unalista = borrarDatoListaL (unalista, 10);

  mostrarListaL (unalista);

  return 0;
}
