#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	/*int age = 0;
	printf("당신의 나이는 ? \n");
	scanf("%d", age);
	
	if (age >= 20) {
		printf("입장 가능합니다. \n");
	}
	
	else {
		printf("입장할 수 없습니다. \n");
	}*/

	int A = 0;
	int B = -1;
	scanf("%d", &A);

	if (A >= 0) {
		printf("%d 절대값 : %d\n",A,A);
	}
	else {
		printf("%d 절대값 : %d\n",A,A*B);
	}
}