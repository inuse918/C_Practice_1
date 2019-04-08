#include <stdio.h>

void main() {
	int a = 1234;
	float b = 1.235;
	printf("%d\n", a);
	printf("%-7d@@@\n", a); //-를 붙이면 왼쪽정렬
	printf("%f\n", b);
	printf("%9f\n", b);
	printf("%9.2f\n", b);
}