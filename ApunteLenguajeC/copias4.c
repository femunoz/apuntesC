/* Versión con punteros (más compacta todavía) */

#include <stdio.h>

void my_strcpy(char *s, char *t)
  {
    while(*s++=*t++)
        ;
  }

main()
  {
    char a[10];

    my_strcpy(a, "hola");
    printf("%s\n", a);
  }
