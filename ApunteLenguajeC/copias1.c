/* Versión con arreglos */

#include <stdio.h>

void my_strcpy(char s[], char t[])
  {
    int i;

    i=0;
    while((s[i]=t[i])!='\0')
        ++i;
  }

main()
  {
    char a[10];

    my_strcpy(a, "hola");
    printf("%s\n", a);
  }
