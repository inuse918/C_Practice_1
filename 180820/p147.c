#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[3], i;
	for (i = 0; i < 3; i++) {
		scanf("%f", &a[i]);
	}
	printf("a[3]의 요솟값 출력:");
	for (i = 0; i < 3; i++) {
		printf("%2f", a[i]);
	} 
	printf("\n");
	return 0;
}