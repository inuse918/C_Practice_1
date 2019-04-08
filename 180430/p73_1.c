#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int No;
	char Gender;
	char Name[7];
	float Weight;
	float Bodyfat;

	printf("성별\n");
	scanf("%c", &Gender);
	

	printf("번호\n");
	scanf("%d",&No);


	printf("이름\n");
	scanf("%s", Name);


	printf("체중\n");
	scanf("%f", &Weight);


	printf("체지방\n");
	scanf("%f", &Bodyfat);



	printf("%c\t", Gender);
	printf("%d\t", No);
	printf("%s\t", Name);
	printf("%f\t", Weight);
	printf("%.1f\t", Bodyfat);

	return 0;
	
}