#include "Fila.h"

int
main ()
{
  struct FilaDeBanco *unaFila = NULL;

  unaFila = insertarFila (unaFila, 4);
  unaFila = insertarFila (unaFila, 1);
  unaFila = insertarFila (unaFila, 2);
  unaFila = insertarFila (unaFila, 3);
  unaFila = insertarFila (unaFila, 7);
  unaFila = insertarFila (unaFila, 9);

  mostrarFila (unaFila);

  unaFila = quitarFila (unaFila);
  unaFila = quitarFila (unaFila);
  unaFila = quitarFila (unaFila);
  unaFila = quitarFila (unaFila);
  unaFila = quitarFila (unaFila);
  unaFila = quitarFila (unaFila);

  mostrarFila (unaFila);

  return 0;
}
