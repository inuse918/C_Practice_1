#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int x, int y);
void main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("�� ���� �� = %d\n", add(a, b));
}
int add(int x, int y) {
	return x + y;
}