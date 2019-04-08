#include <stdio.h>
void main() {
	int a[] = { 10,20,30,40,50 };
	int sum = 0, *b;
	b = a;
	do {
		sum = sum + *b++;
	} while (b <= &a[4]);
	printf("10, 20, 30, 40, 50, ÀÇ ÇÕÀº %d \n", sum);
}