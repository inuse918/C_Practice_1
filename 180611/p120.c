#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	/*int age = 0;
	printf("����� ���̴� ? \n");
	scanf("%d", age);
	
	if (age >= 20) {
		printf("���� �����մϴ�. \n");
	}
	
	else {
		printf("������ �� �����ϴ�. \n");
	}*/

	int A = 0;
	int B = -1;
	scanf("%d", &A);

	if (A >= 0) {
		printf("%d ���밪 : %d\n",A,A);
	}
	else {
		printf("%d ���밪 : %d\n",A,A*B);
	}
}