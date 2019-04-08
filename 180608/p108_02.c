#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	 
	int x, y;

	printf("x의 값을 입력하세요 : ");
	scanf("%d", &x);
	printf("x의 값을 입력하세요 : ");
	scanf("%d", &y);

	int a = x / y;
	int b = x % y;

	if (y == x * a + b) {
		printf("성립한다.");
	}
	else {
		printf("성립하지 않는다.");
	}

	

}