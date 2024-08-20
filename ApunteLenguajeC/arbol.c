#include <stdio.h>
#include <string.h>

struct nodo
  {
    char *info;
    struct nodo *izq;
    struct nodo *der;
  };

struct nodo *new_nodo(char *s, struct nodo *i, struct nodo *d)
  {
    struct nodo *p;

    p=(struct nodo *)malloc(sizeof(struct nodo));
    p->izq=i;
    p->der=d;
    p->info=strdup(s);

    return p;
  }

void preorden(struct nodo *p)
  {
    if(p!=NULL)
      {
        printf("%s\n", p->info);
        preorden(p->izq);
        preorden(p->der);
      }
  }

/* Programa que crea un árbol pequeño y lo recorre en preorden */

main()
  {
    struct nodo *a;

    a=new_nodo("A",
        new_nodo("B", NULL, NULL),
        new_nodo("C",
            new_nodo("D", NULL, NULL),
            new_nodo("E", NULL, NULL)
        )
      );

    preorden(a);
  }
