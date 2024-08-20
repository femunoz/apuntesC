#include <stdio.h>

#define MIN 0
#define MAX 300
#define STEP 20

/* Imprime tabla Fahrenheit-Celsius */

main()
  {
    float f;

    for(f=MIN; f<=MAX; f+=STEP)
        printf("%3.0f %6.1f\n", f, (5.0/9.0)*(f-32.0));
  }
