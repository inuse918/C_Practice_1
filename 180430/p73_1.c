#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int No;
	char Gender;
	char Name[7];
	float Weight;
	float Bodyfat;

	printf("����\n");
	scanf("%c", &Gender);
	

	printf("��ȣ\n");
	scanf("%d",&No);


	printf("�̸�\n");
	scanf("%s", Name);


	printf("ü��\n");
	scanf("%f", &Weight);


	printf("ü����\n");
	scanf("%f", &Bodyfat);



	printf("%c\t", Gender);
	printf("%d\t", No);
	printf("%s\t", Name);
	printf("%f\t", Weight);
	printf("%.1f\t", Bodyfat);

	return 0;
	
}