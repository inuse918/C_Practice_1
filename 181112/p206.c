#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int hap(int values[], int num);

int main(void) {
	int aa[5];
	int i;
	int sum;

	printf("5���� ���� �������� �Է��Ͻÿ�\n");
	for (i = 0; i < 5; i++) {
		printf("%d ��° ������ �ϳ��� �Է��Ͻÿ�  ", i + 1);
		scanf("%d",&aa[i]);
	}
	sum = hap(aa, 5);
	printf("\n 5������ ���� : %d\n", sum);
	return 0;
}

int hap(int values[], int num) { // �հ踦 ���ϴ� �Լ�
	int i;
	int sum = 0;
	for (i = 0; i < num; i++) {
		sum += values[i];
	}
	return sum;
}