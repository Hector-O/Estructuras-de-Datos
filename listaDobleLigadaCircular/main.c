#include "ListaLigadaCircularDoble.h"

int
main ()
{
  struct listaLigadaCircularDoble *unalista = NULL;
  unalista = insertarListaLCD (unalista, 12);
  unalista = insertarListaLCD (unalista, 31);
  unalista = insertarListaLCD (unalista, 52);
  unalista = insertarListaLCD (unalista, 123);
  unalista = insertarListaLCD (unalista, 53);
  unalista = insertarListaLCD (unalista, 6);
  printf ("SE HAN INSERTADO\n");


  mostrarListaLCD (unalista);

  unalista = borrarDatoListaLCD (unalista, 70);

  mostrarListaLCD (unalista);

  return 0;
}
