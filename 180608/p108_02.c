#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	 
	int x, y;

	printf("x�� ���� �Է��ϼ��� : ");
	scanf("%d", &x);
	printf("x�� ���� �Է��ϼ��� : ");
	scanf("%d", &y);

	int a = x / y;
	int b = x % y;

	if (y == x * a + b) {
		printf("�����Ѵ�.");
	}
	else {
		printf("�������� �ʴ´�.");
	}

	

}