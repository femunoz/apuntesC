/* Imprime subrayando */

#include <stdio.h>
#include <stdarg.h>

void ulprintf(char *fmt, ...)
  {
    int n;
    va_list ap;

    va_start(ap, fmt);
    n=vprintf(fmt, ap);
    va_end(ap);

    while(--n>0)
        putchar('=');
    putchar('\n');
  }

main()
  {
    int a=5;
    float b=4.2;

    ulprintf("a=%d b=%3.1f\n", a, b);
    ulprintf("fin\n");
  }
