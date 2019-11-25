#include "Arbol.h"

int
main ()
{
  struct arbol *unArbol = NULL;

  int datoRaiz = 527;
  int dato1 = 723;
  int dato2 = 224;
  int dato3 = 123;
  int dato4 = 645;
  int dato5 = 445;
  int dato6 = 975;
  int dato7 = 835;

  printf ("Se inserta a %d, %d, %d, %d, %d, %d, %d, %d\n", datoRaiz, dato1,
	  dato2, dato3, dato4, dato5, dato6, dato7);
  unArbol = insertarArbol (unArbol, datoRaiz);
  unArbol = insertarArbol (unArbol, dato1);
  unArbol = insertarArbol (unArbol, dato2);
  unArbol = insertarArbol (unArbol, dato3);
  unArbol = insertarArbol (unArbol, dato4);
  unArbol = insertarArbol (unArbol, dato5);
  unArbol = insertarArbol (unArbol, dato6);
  unArbol = insertarArbol (unArbol, dato7);

  puts ("Se mostratan en preorden");
  mostrarArbolPRE (unArbol);
  puts ("");

  printf ("Se elimina a %d, %d, %d \n", dato4, dato2, dato1);
  unArbol = eliminarDeArbol (unArbol, dato4);
  unArbol = eliminarDeArbol (unArbol, dato2);
  unArbol = eliminarDeArbol (unArbol, dato1);

  puts ("Se mostratan en preorden");
  mostrarArbolPRE (unArbol);

  puts ("Se mostratan en inorden");
  mostrarArbolIN (unArbol);

  puts ("Se mostratan en postorden");
  mostrarArbolPOST (unArbol);

  return 0;
}
