#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char Name[7];
	int A, B, C, Total;
	float Average;
	Total = 0;
	Average = 0;

	printf("�̸� �Է� : ");
	scanf("%s", Name);
	
	printf("���� A �Է�: ");
	scanf("%d", &A);

	printf("���� B �Է� : ");
	scanf("%d", &B);
	
	printf("���� C �Է� : ");
	scanf("%d", &C);

	Total = A + B + C;
	Average = Total / 3;

	printf("----------------------------------\n");
	printf("�̸� : %s \n", Name);
	printf("���� A : %d \n", A);
	printf("���� B : %d \n", B);
	printf("���� C : %d \n", C);
	printf("���� : %d \n", Total);
	printf("��� : %.2f \n", Average);

	return 0;
	

}