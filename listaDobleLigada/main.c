#include "listaLigadaDoble.h"

int
main ()
{
  struct listaLigadaDoble *unalista = NULL;
  unalista = insertarListaLDoble (unalista, 12);
  unalista = insertarListaLDoble (unalista, 78);
  unalista = insertarListaLDoble (unalista, 7);
  unalista = insertarListaLDoble (unalista, 69);
  unalista = insertarListaLDoble (unalista, 2);
  unalista = insertarListaLDoble (unalista, 53);
  printf ("SE HAN INSERTADO\n");


  mostrarListaLDoble (unalista);

  borrarDatoListaLDoble (unalista, 12);
  borrarDatoListaLDoble (unalista, 2);

  mostrarListaLDoble (unalista);
  mostrarListaLDobleAlReves (unalista);

  return 0;
}
