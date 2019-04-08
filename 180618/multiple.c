#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	int i, j, big = 0, sma = 0;
	//i = 2
	printf("숫자를 입력하세요 : ");
	scanf("%d,%d", &i,&j); 

	if (j > i) {
		big = j;
		sma = i;
	}
	else if (i > j) {
		big = i;
		sma = j;
	}
	for (int a = sma; a <= big; a++) {
		for (int b = 1; b <= 9; b++) {
			printf("%d * %d = %d", a, b, a*b);
		}
	}