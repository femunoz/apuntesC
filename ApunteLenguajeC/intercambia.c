void intercambia(int *px, int *py)
  {
    int aux;

    aux=*px;
    *px=*py;
    *py=aux;
  }

main()
  {
    int a=1, b=2;

    printf("ANTES:   a=%d b=%d\n", a, b);

    intercambia(&a, &b);  /* NO intercambia(a, b) */

    printf("DESPUES: a=%d b=%d\n", a, b);
  }
