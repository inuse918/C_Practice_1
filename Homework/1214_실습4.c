#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int p(int n);
void main() {
	int a;
	scanf("%d", &a);
	printf("%d의 절댓값은 %d이다.\n",a,p(a) );
}
int p(int n) {
	if (n < 0)
		n *= -1;
	return n;
}