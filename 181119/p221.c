#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct HAP {
	int a, b;
};

void main() {
	struct HAP sum;
	int hapgae;
	printf("�� �� �Է� : ");
	scanf("%d%d", &sum.a, &sum.b);
	hapgae = sum.a + sum.b;
	printf("�հ� : %d\n", hapgae);
}