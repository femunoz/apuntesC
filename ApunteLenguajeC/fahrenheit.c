#include <stdio.h>

/* Imprime tabla Fahrenheit-Celsius */

main()
  {
    int f, c;
    int min, max, step;

    min=0;
    max=300;
    step=20;

    f=min;
    while(f<=max)
      {
        c=5*(f-32)/9;
        printf("%d\t%d\n", f, c);
        f=f+step;
      }
  }
