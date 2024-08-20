#include <stdio.h>

#define MAXLINEA 1000

/* Copia desde -> hacia */
void copia(char hacia[], char desde[])
  {
    int i;

    for(i=0; (hacia[i]=desde[i])!='\0'; ++i)
        ;
  }

/* Lee una linea en arreglo s de largo m�ximo lim */
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

/* Programa que imprime la l�nea m�s larga */
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

    printf("La l�nea m�s larga es:\n%s\n", larga);
  }
