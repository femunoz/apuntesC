#include <stdio.h>
#include <stdlib.h>

main()
  {
	void *p;

	p=malloc(100);
	printf("%d %d\n",p,p+1);
  }
