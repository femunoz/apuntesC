/* Versión con punteros */

#include <stdio.h>

void my_strcpy(char *s, char *t)
  {
    while((*s=*t)!='\0')
      {
        ++s;
        ++t;
      }
  }

main()
  {
    char a[10];

    my_strcpy(a, "hola");
    printf("%s\n", a);
  }
