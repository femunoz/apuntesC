#include <stdio.h>
#include <string.h>

#define ANCHO 1000
#define MAX 10000

main()
  {
    char s[ANCHO];
    char *linea[MAX];
    int i, j;
    void qsort(void **, int, int, int (*)(void *, void *));

    for(i=0; fgets(s, ANCHO, stdin)!=NULL; ++i)
        linea[i]=strdup(s);

    qsort((void **)linea, 0, i-1, strcmp);

    for(j=0; j<i; ++j)
        fputs(linea[j], stdout);
  }
