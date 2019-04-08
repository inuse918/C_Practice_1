#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	int score = 0;
	printf("성적을 입력하시오.\n");
	scanf("%d", &score);
	
	if (score >= 70)
		printf("합격입니다.");

	return 0;
		
}