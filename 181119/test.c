#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	/*
	int *ptr;
	int a[5] = { 0 };
	ptr = a;

	printf("%p\n", a);
	printf("%p\n", &a[0]);
	printf("%p\n", &a[1]);
	printf("%p\n", ptr + 1);
	printf("%d\n", a[1]);
	printf("%d\n", *(ptr + 1));

	char aa[] = "Seoul";
	char *p = "Busan";
	printf("%s\n", aa);
	printf("%s\n", p);

	//aa = "Newyork";
	strcpy(aa, "NewYork");
	printf("%s\n", aa);
	//p = "Busan";
	strcpy(p, "Jeju");
	printf("%s\n", p);

	a[1] = 'E';
	*(a + 2) = 'O';
	*(p + 1) = 'U';
	p[2] = 'S';
	*/
	int a[5] = { 1,2,3,4,5 };
	printf("%d\n", *a);
	printf("%d\n", a[0]);
	int b[2][3] = { 10,20,30,40,60 };
	printf("%d\n", **b);
	printf("%d\n", *b[0]);
	printf("%d\n", b[0][0]);

	int c[2][3][4] = { 0 };
	printf("%d\n", ***c);
	printf("%d\n", **c[0]);
	printf("%d\n", *c[0][0]);
	printf("%d\n", c[0][0][0]);

	

}