#include <stdio.h>

void filecopy(FILE *in, FILE *out)
  {
    int c;

    while((c=getc(in))!=EOF)
        putc(c, out);
  }

main(int argc, char *argv[])
  {
    FILE *fp;

    if(argc==1) /* sin argumentos */
        filecopy(stdin, stdout);
    else
        while(--argc>0)
            if((fp=fopen(*++argv, "r"))==NULL)
              {
                fprintf(stderr, "No se puede abrir archivo '%s'\n", *argv);
                exit(1);
              }
            else
              {
                filecopy(fp, stdout);
                fclose(fp);
              }
  }
