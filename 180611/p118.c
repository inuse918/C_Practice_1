#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int age;
	printf("����� ���̴� ? (1.15�� �̻�, 2.15�� �̸� ) : ");
	scanf("%d", &age);

	if (age == 1) {
		printf("���� �����մϴ�.\n");
	}
	if (age == 2) {
		printf("������ �� �����ϴ�.\n");
	}
	return 0;
}