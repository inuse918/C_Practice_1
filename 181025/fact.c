#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fact(int a) {

	if (a == 1) {
		printf("1");
		return 1;
	}
	
	else {
		printf("%d * ", a);
		return a * fact(a - 1);
	}
}

void main() {
	int your;
	printf("팩토리얼값을 구할 정수를 입력하세요(1~10): ");
	scanf("%d", &your);
	printf("%d! =",your);
	int k = fact(your);
	printf("=%d\n", k);
}