#include "pila.h"

int
main ()
{
  struct pila *unaPila = NULL;
  unaPila = push (unaPila, 10);
  unaPila = push (unaPila, 29);
  unaPila = push (unaPila, 12);
  unaPila = push (unaPila, 76);
  unaPila = push (unaPila, 51);
  unaPila = push (unaPila, 68);
  unaPila = push (unaPila, 90);
  unaPila = push (unaPila, 82);
  unaPila = push (unaPila, 91);

  mostrarPila (*unaPila);

  unaPila = pop (unaPila);
  unaPila = pop (unaPila);

  mostrarPila (*unaPila);

  return 0;
}
