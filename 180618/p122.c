#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int cap;
	printf("���� ������ ������ ? (1. �̱� 2. �Ϻ� 3. �߱�)");
	scanf("%d", &cap);
	switch (cap) {
	case 1: printf("�̱� : ������ D.C\n"); break;
	case 2: printf("�Ϻ� : ����\n"); break;
	case 3: printf("�߱� : ����¡\n"); break;
	default:printf("�Է� �����Դϴ�.\n");
	}
	return 0;
}