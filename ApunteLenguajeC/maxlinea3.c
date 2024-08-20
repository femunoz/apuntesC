/* Programa que imprime la l�nea m�s larga */

#include <stdio.h>
#include <string.h>

#define MAXLINEA 1000

main()
  {
    int largo, maxlargo;
    char linea[MAXLINEA], larga[MAXLINEA];

    maxlargo=0;
    while(fgets(linea, MAXLINEA, stdin)!=NULL)
      {
        largo=strlen(linea);
        if(largo>maxlargo)
          {
            maxlargo=largo;
            strcpy(larga, linea);
          }
      }

    printf("La l�nea m�s larga es:\n%s\n", larga);
  }
