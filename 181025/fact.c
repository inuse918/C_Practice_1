#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int a) {

	if (a == 1) {
		printf("1");
		return 1;
	}
	
	else {
		printf("%d * ", a);
		return a * fact(a - 1);
	}
}

void main() {
	int your;
	printf("���丮���� ���� ������ �Է��ϼ���(1~10): ");
	scanf("%d", &your);
	printf("%d! =",your);
	int k = fact(your);
	printf("=%d\n", k);
}