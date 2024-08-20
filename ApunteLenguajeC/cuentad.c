/* Cuenta dígitos */

#include <stdio.h>

main()
  {
    int c, i;
    int a[10];

    for(i=0; i<=9; ++i)
        a[i]=0;

    while((c=getchar())!=EOF)
        if(c>='0' && c<='9')
            ++a[c-'0'];

    for(i=0; i<=9; ++i)
        printf("%d    %d\n", i, a[i]);
  }
