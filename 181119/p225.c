#include <stdio.h>

struct student {
	int number;
	char name[10];
	int kor;
	int eng;
	int mat;
	int sum;
	float avg;
};

int main(void) {
	struct student list[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("학번을 입력하시오(정수): ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오(문자열): ");
		scanf("%s", list[i].name,10);
		printf("국어 점수를 입력하시오(정수): ");
		scanf("%d", &list[i].kor);
		printf("영어 점수를 입력하시오(정수): ");
		scanf("%d", &list[i].eng);
		printf("학번을 입력하시오(정수): ");
		scanf("%d", &list[i].number);
	}
}