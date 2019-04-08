#include <stdio.h>

void main(void) {
	int i = 5, j = 10;
	int *p = &i, *q = &j;
	printf(" (1) i= %d , j= %d \n",i,j);
	printf(" (2) i= %d,  j= %d \n",&i,&j);
	printf(" (3) i= %d,  j= %d \n", p, q);
	printf(" (4) i= %d,  j= %d \n", *p, *q);
}