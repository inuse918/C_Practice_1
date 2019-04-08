#include <stdio.h>

int main() {
	int m, n, k;
	m = 58; n = 16; k = 0;

	do
	{	k = m % n;
		m = n; n = k;
		printf("%d %d %d\n", m, n, k);
	} while (k != 0);

	printf("m의 값은 %d 입니다. \n" , m);
	

}