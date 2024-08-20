#include <stdio.h>

/* Función que calcula elevación a potencia */
int potencia(int a, int n)
  {
    int i, p;

    p=1;
    for(i=1; i<=n; ++i)
        p*=a;

    return p;
  }

/* Programa de prueba que imprime potencias de 2 y de -3 */
main()
  {
    int i;

    for(i=0; i<=10; ++i)
        printf("%2d %6d %6d\n",
            i, potencia(2,i), potencia(-3,i));

    return 0; /* para indicar fin OK */
  }
