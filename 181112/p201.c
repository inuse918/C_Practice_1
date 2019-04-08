#include <stdio.h>

void main() {
	char *p;
	int i;
	char aa[] = "KOREA";
	p = aa; // &aa[0]
	for (i = 0; i <= 10; i++)
		printf("*(p+ %d) == %c, \n", i, *(p + i));
		printf("*(p+ %d) == %c, \n", i, aa[i]);
}