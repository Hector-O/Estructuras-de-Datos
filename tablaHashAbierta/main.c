#include "tHash.h"

int
main ()
{
  struct tHash *unaTabla = NULL;
  unaTabla = insertarTabla (unaTabla, 5900);
  unaTabla = insertarTabla (unaTabla, 5900);
  unaTabla = insertarTabla (unaTabla, 58468);
  unaTabla = insertarTabla (unaTabla, 7641);
  unaTabla = insertarTabla (unaTabla, 315);
  unaTabla = insertarTabla (unaTabla, 91386);
  unaTabla = insertarTabla (unaTabla, 103);
  unaTabla = insertarTabla (unaTabla, 4575);
  unaTabla = insertarTabla (unaTabla, 214274831);
  unaTabla = insertarTabla (unaTabla, 425);
  unaTabla = insertarTabla (unaTabla, 789);
  unaTabla = insertarTabla (unaTabla, 79465);
  unaTabla = insertarTabla (unaTabla, 7864);
  unaTabla = insertarTabla (unaTabla, 12317);
  unaTabla = insertarTabla (unaTabla, 6743);
  unaTabla = insertarTabla (unaTabla, 8938);
  unaTabla = insertarTabla (unaTabla, 7137);
  unaTabla = insertarTabla (unaTabla, 784132);
  unaTabla = insertarTabla (unaTabla, 137);
  unaTabla = insertarTabla (unaTabla, 7873);
  unaTabla = insertarTabla (unaTabla, 737);
  unaTabla = insertarTabla (unaTabla, 37413743);
  unaTabla = insertarTabla (unaTabla, 137);

  mostrarTabla (unaTabla);

  unaTabla = borrarTabla (unaTabla, 137);
  unaTabla = borrarTabla (unaTabla, 214274831);
  unaTabla = borrarTabla (unaTabla, 103);
  unaTabla = borrarTabla (unaTabla, 5900);


  mostrarTabla (unaTabla);

  return 0;
}
