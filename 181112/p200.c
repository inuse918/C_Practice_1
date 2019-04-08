#include <stdio.h>

void main() {
	char aa[6] = "Korea";
	char *p;
	int i;
	p = &aa[0];
	printf("p = %x \n", &aa[0]);
	printf("%p = %p\n",&p);
	printf("*p = *x\n\n",*p);
	printf("*p = *s\n\n", *p);
	
	for (int i = 0; i <= 4; i++) {
		printf("aa[%d] = %c, 林家绰 %p \n", i, *(p + i), &aa[i]);
		printf("aa[%d] = %c, 林家绰 %p \n", i, aa[i], p + i);
		printf("aa[%d] = %c, 林家绰 %p \n", i, *(aa + i), &p[i]);
		printf("aa[%d] = %c, 林家绰 %p \n\n", i, p[i], aa + i);
	}

}