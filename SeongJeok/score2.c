#define _CRT_SECURE_NO_WARNINGS
#define PEOPLE 3
#define SUB 4
#include <stdio.h>

void line(int a) {
	for (int i = 1; i <= a; i++) {
		printf("*");
	}
	printf("\n");
}
struct student {
	char ID[5]; //학번
	char Name[7]; //이름
	int score[SUB + 1]; //점수
	double avg; //평균
	char s; //등급 (4byte 증가)
	int rank; //등수
}stu[PEOPLE];



void main() {
	/*struct student *p = stu;
	printf("%d\n", sizeof(struct student));
	printf("%d", sizeof(stu));
	char subname[SUB][6] = { "국어","영어","수학","C언어" };
	for (int i = 0; i < PEOPLE; i++) {
		printf("학번 (4자리) : ");
		scanf("%s", stu[i].ID);
		printf("이름 (3글자) : ");
		scanf("%s", stu[i].Name);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s 점수 입력 (0~100점) : ", subname[j]);
				scanf("%d", &stu[i].score[j]);
				if (stu[i].score[j] < 0 || stu[i].score[j]> 100) {
					printf("점수 오류, 재입력\n");
				}
				else break;
			}
		}
	}//입력*/
	struct student *p = stu;
	char subname[SUB][6] = { "국어","영어","수학","C언어" };
	for (int i = 0; i < PEOPLE; i++) {
		printf("학번 (4자리) : ");
		scanf("%s", (*p).ID);
		printf("이름 (3글자) : ");
		scanf("%s", (*p).Name);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s 점수 입력 (0~100점) : ", subname[j]);
				scanf("%d",&((*p).score[j]));
				if ((*p).score[j] < 0 || (*p).score[j]> 100) {
					printf("점수 오류, 재입력\n");
				}
				else break;
			}
		}
	}//입력
	printf("%s", (*p).ID);
	//printf("%s", (*(p+1)).ID);
	
}