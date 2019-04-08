#include <stdio.h>

int a();

int main() {
	int b = 10;
	printf("첫 번째 b는 %d\n", b);
	a(b);
	printf("두 번째 b는 %d\n",b);
	return 0;
}
int a(int b) {
	b = b + 20;
	return b;
}