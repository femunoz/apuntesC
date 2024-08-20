/* Cuenta caracteres */

#include <stdio.h>

main()
  {
    int nc;

    nc=0;
    while(getchar()!=EOF)
        ++nc;

    printf("%d\n", nc);
  }
