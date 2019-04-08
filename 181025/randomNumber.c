#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int cnt=1,answer=0;
	printf("숫자를 맞춰보세요! (50~150)\n");
	srand((unsigned)time(NULL));
	int num = rand() % 101 + 50;
	//printf("%d\n", num);

	while (cnt <= 8) {
		printf("%d번 째 숫자 입력: ",cnt);
		scanf("%d", &answer);
		if (answer == num) {
			printf("축하합니다! %d번 만에 맞추셨습니다.", cnt);
			break;
		}
		else if (answer > num) {
			printf("입력하신 숫자가 더 큽니다.\n");
		}
		else if (answer < num) {
			printf("입력하신 숫자가 더 작습니다.\n");
		}
		cnt++;
	}

	if (cnt > 8) {
		printf("아쉽게도 8번 이내에 맞추지 못했습니다.\n");
		printf("답은 %d 입니다!\n", num);
	}
	

}