#include <stdio.h>

#define MAXLINEA 1000

/* Copia desde -> hacia */
void copia(char hacia[], char desde[])
  {
    int i;

    for(i=0; (hacia[i]=desde[i])!='\0'; ++i)
        ;
  }

/* Lee una linea en arreglo s de largo máximo lim */
/* Retorna 0 si encuentra fin de archivo */
int getline(char s[], int lim)
  {
    int c, i;

    for(i=0; i<lim-1
          && (c=getchar())!=EOF
          && c!='\n'; ++i)
        s[i]=c;
    if(c=='\n')
      {
        s[i]=c;
        ++i;
      }
    s[i]='\0';

    return i;
  }

/* Programa que imprime la línea más larga */
main()
  {
    int largo, maxlargo;
    char linea[MAXLINEA], larga[MAXLINEA];

    maxlargo=0;
    while((largo=getline(linea, MAXLINEA))>0)
        if(largo>maxlargo)
          {
            maxlargo=largo;
            copia(larga, linea);
          }

    printf("La línea más larga es:\n%s\n", larga);
  }
