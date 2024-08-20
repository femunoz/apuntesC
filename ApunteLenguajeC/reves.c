/* Lee un archivo y lo imprime al revés */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LARGOMAX 1000
#define MAXLINEAS 10000

main()
  {
    char linea[LARGOMAX];
    char *a[MAXLINEAS];  /* arreglo de punteros a las líneas */
    int k;

    /* primero leemos las lineas */

    for(k=0; fgets(linea, LARGOMAX, stdin)!=NULL; ++k)
      {
        if(k>=MAXLINEAS)
          {
            fprintf(stderr, "Archivo demasiado grande\n");
            exit(-1);
          }
        a[k]=strdup(linea);  /* Construye una copia del string */
      }

    /* ahora las imprimimos al reves */

    while(k-->0)
       fputs(a[k], stdout);
  }
