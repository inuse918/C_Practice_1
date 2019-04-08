#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	int m, n = 8;
	printf("----------\n");

	while (n <= 9) {
		m = 1;
		while (m <= 9) {
			printf("%d*%d = %2d\n",n,m,n*m);
			m++;
		}
		printf("----------\n");
		n++;
	}
	
}