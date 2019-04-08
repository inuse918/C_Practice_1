#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int hap(int values[], int num);

int main(void) {
	int aa[5];
	int i;
	int sum;

	printf("5개의 양이 정숫값을 입력하시오\n");
	for (i = 0; i < 5; i++) {
		printf("%d 번째 정숫값 하나를 입력하시오  ", i + 1);
		scanf("%d",&aa[i]);
	}
	sum = hap(aa, 5);
	printf("\n 5개수의 합은 : %d\n", sum);
	return 0;
}

int hap(int values[], int num) { // 합계를 구하는 함수
	int i;
	int sum = 0;
	for (i = 0; i < num; i++) {
		sum += values[i];
	}
	return sum;
}