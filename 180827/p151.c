#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char a[20];
	printf("���ڿ� �Է�?:");
	scanf("%s", a);
	printf("�Է� ���ڿ� ���!: %s\n", a);
	printf("2��° ���� ���!:%c\n",a[1]);
	return 0;
}