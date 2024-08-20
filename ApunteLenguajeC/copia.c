#include <stdio.h>

/* Copiar entrada hacia salida */

main()
  {
    int c;

    c=getchar();
    while(c!=EOF)
      {
        putchar(c);
        c=getchar();
      }
  }
