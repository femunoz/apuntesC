#include <stdio.h>

/* Copiar entrada hacia salida */

main()
  {
    int c;

    while((c=getchar())!=EOF)
        putchar(c);
  }
