#include <stdio.h>
#include <string.h>
 
#define ANCHO 1000
#define MAX 10000

int numcmp(char *s1, char *s2) /* compara numéricamente */
  {
    int i1, i2;

    i1=atoi(s1);
    i2=atoi(s2);

    return(i1<i2? -1 : i1==i2? 0 : 1);
  }
 
main(int argc, char *argv[])
  {
    char s[ANCHO];
    char *linea[MAX];
    int i, j, numeric=0;
    void qsort(void **, int, int, int (*)(void *, void *));

    numeric=(argc==2 && strcmp(argv[1], "-n")==0);
    if(argc>2|| argc==2 && !numeric)
      {
        fprintf(stderr, "Use: ordena [-n]\n");
        exit(1);
      }
 
    for(i=0; fgets(s, ANCHO, stdin)!=NULL; ++i)
        linea[i]=strdup(s);
 
    qsort((void **)linea, 0, i-1, (numeric?numcmp:strcmp));
 
    for(j=0; j<i; ++j)
        fputs(linea[j], stdout);
  }
