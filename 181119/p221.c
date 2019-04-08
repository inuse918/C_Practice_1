#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct HAP {
	int a, b;
};

void main() {
	struct HAP sum;
	int hapgae;
	printf("두 수 입력 : ");
	scanf("%d%d", &sum.a, &sum.b);
	hapgae = sum.a + sum.b;
	printf("합계 : %d\n", hapgae);
}