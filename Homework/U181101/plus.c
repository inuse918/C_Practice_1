#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void main() {
	char alp[26];
	char ALP[26];
	char your[50];
	int length;
	int total=0;
	printf("영어단어를 입력하세요\n");
	scanf("%s", your);

	for (int i = 65, j = 0; i < 91; i++,j++) {
		alp[j] = i+32;
		ALP[j] = i;
	}
	length = strlen(your);

	for (int i = 0; i < length;i++) {
		for (int j = 0; j < 26; j++) {
			if (your[i] == alp[j]) {
				total += j + 1;
			}
			else if (your[i] == ALP[j]) {
				total += j + 1;
			}
		}
	}
	printf("합계: %d\n", total);
}