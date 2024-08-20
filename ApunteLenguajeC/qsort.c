/* ordena datos de cualquier tipo usando Quicksort */

void swap(void *v[], int i, int j)
  {
    void *aux;

    aux=v[i];
    v[i]=v[j];
    v[j]=aux;
  }

void qsort(void *a[], int left, int right,
           int (*compare)(void *, void *))
  {
    int i, last;

    if(left>=right)
        return;

    swap(a, left, (left+right)/2);
    last=left;

    /*
          +--+-----------+--------+--------------+
          |  |///////////|\\\\\\\\|              |
          +--+-----------+--------+--------------+
          left        last         i         right
    */

    for(i=left+1; i<=right; ++i)
        if((*compare)(a[i], a[left])<0)
            swap(a, ++last, i);
    swap(a, left, last);

    qsort(a, left, last-1, compare);
    qsort(a, last+1, right, compare);
  }
