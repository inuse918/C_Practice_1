#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int p(int a, int b);
void main() {
	int c, d;
	scanf("%d%d", &c, &d);
	printf("%d\n", p(c, d));
}
int p(int a, int b) {
	int result;
	if (a >= b) result = a - b;
	else result = b - a;
	return result;
}