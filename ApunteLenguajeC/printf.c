#include <stdio.h>
#include <stdarg.h>

void miniprintf(char *fmt, ...)
  {
    va_list ap; /* argument pointer */
    char *p, *sval;
    int ival;
    double dval;

    va_start(ap, fmt); /* fmt es el último parámetro de la parte no variable */
    for(p=fmt; *p; ++p)
      {
        if(*p!='%')
          {
           putchar(*p);
           continue;
          }

        switch(*++p)
          {
        case 'd':
            ival=va_arg(ap, int);
            printf("%d", ival);
            break;

        case 'f':
            dval=va_arg(ap, double);
            printf("%f", dval);
            break;

        case 's':
            sval=va_arg(ap, char *);
            printf("%s", sval);
            break;

        default:
            putchar(*p);
            break;
          }
      }
    va_end(ap);
  }

main()
  {
    miniprintf("%s %d %f\n", "hola", 5, 3.14);
  }
