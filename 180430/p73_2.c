#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char Name[7];
	int A, B, C, Total;
	float Average;
	Total = 0;
	Average = 0;

	printf("이름 입력 : ");
	scanf("%s", Name);
	
	printf("과목 A 입력: ");
	scanf("%d", &A);

	printf("과목 B 입력 : ");
	scanf("%d", &B);
	
	printf("과목 C 입력 : ");
	scanf("%d", &C);

	Total = A + B + C;
	Average = Total / 3;

	printf("----------------------------------\n");
	printf("이름 : %s \n", Name);
	printf("과목 A : %d \n", A);
	printf("과목 B : %d \n", B);
	printf("과목 C : %d \n", C);
	printf("총점 : %d \n", Total);
	printf("평균 : %.2f \n", Average);

	return 0;
	

}