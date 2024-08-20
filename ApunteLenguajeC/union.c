#include <stdio.h>

struct numero
  {
    int tipo; /* selector */
    union
      {
        int ival;
        float fval;
      } u;
  };

enum{INT, FLOAT}; /* Equivale a #define INT 0, #define FLOAT 1 */

void imprimir(struct numero a)
  {
    switch(a.tipo)
      {
    case INT:
        printf("%d\n", a.u.ival);
        break;

    case FLOAT:
        printf("%f\n", a.u.fval);
      }
  }

main()
  {
    struct numero x;

    x.tipo=INT;
    x.u.ival=5;
    imprimir(x);

    x.tipo=FLOAT;
    x.u.fval=3.14;
    imprimir(x);
  }
