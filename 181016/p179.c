#include <stdio.h>

int a();

int main() {
	int b = 10;
	printf("ù ��° b�� %d\n", b);
	a(b);
	printf("�� ��° b�� %d\n",b);
	return 0;
}
int a(int b) {
	b = b + 20;
	return b;
}