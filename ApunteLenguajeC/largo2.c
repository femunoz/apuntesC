int my_strlen(char *s)
  {
    char *p=s;

    while(*p!='\0')
        ++p;

    return p-s;
  }

main()
  {
    printf("%d\n", my_strlen("hola"));
  }
