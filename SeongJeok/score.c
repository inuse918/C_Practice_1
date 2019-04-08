#define _CRT_SECURE_NO_WARNINGS
#define PEOPLE 3
#define SUB 4
#include <stdio.h>

void line(int a) {
	for (int i = 1; i <=a; i++) {
		printf("*");
	}
	printf("\n");
}
struct student {
	char ID[5]; //학번,
	char Name[7]; //이름
	int score[SUB + 2]; //점수
	double avg; //평균
	char s; //등급 (4byte 증가)
	int rank; //등수
}stu[PEOPLE];
int main() {
	struct student *p = stu;
	
	char subname[SUB][6] = { "국어","영어","수학","C언어" };
	for (int i = 0; i < PEOPLE; i++) {
		printf("학번 (4자리) : ");
		scanf("%s", stu[i].ID);
		printf("이름 (3글자) : ");
		scanf("%s", stu[i].Name);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s 점수 입력 (0~100점) : ",subname[j]);
				scanf("%d", &stu[i].score[j]);
				if (stu[i].score[j] < 0 || stu[i].score[j]> 100) {
					printf("점수 오류, 재입력\n");
					continue;
				}
				else break;
			}
		}
	}//입력

	for (int i = 0; i < PEOPLE; i++) {
		for (int j = 0; j < SUB; j++) {
			stu[i].score[SUB] += stu[i].score[j];
		}//총점 계산
		stu[i].score[SUB+1] += stu[i].score[SUB];//총점의 총점
		stu[i].avg = (float)stu[i].score[SUB] / SUB; //평균계산

		switch ((int)stu[i].avg / 10) {
		case 10: case 9:stu[i].s = 'A'; break;
		case 8:stu[i].s = 'B'; break;
		case 7:stu[i].s = 'C'; break;
		case 6:stu[i].s = 'D'; break;
		default: stu[i].s = 'F';
		}//등급 계산
	} //총점 평균 등급 계산

	for (int i = 0; i < SUB; i++) {
		for (int j = 0; j < PEOPLE; j++) {
			stu[i].score[j] += stu[j].score[i];
		}
	}
	// 과목별 총점수 계산
	
	for (int i = 0; i < PEOPLE; i++) {
		stu[i].rank = 1;
	}//석차 초기화
	
	for (int i = 0; i < PEOPLE; i++) {
		for (int j = i+1; j < PEOPLE; j++) {
			if (stu[i].score[SUB] < stu[j].score[SUB]) {
				stu[i].rank++;
			}
			else if (stu[i].score[SUB] > stu[j].score[SUB]) {
				stu[j].rank++;
			}
		}
	}// 석차 계산
	line(70);
	printf("학번  이름  ");

	for (int i = 0; i < SUB; i++) {
		printf("%8s", subname[i]);
	}printf("\n");
	line(70);

	for (int i = 0; i < PEOPLE; i++) 
	{
		printf("%s %s ", stu[i].Name, stu[i].ID);//이름 출력
		for (int j = 0; j <= SUB+1; j++) 
		{
			printf("%8d", stu[i].score[j]);
		}
		//과목 점수 출력

		printf("%8.2f %c %2d등\n", stu[i].avg, stu[i].s,stu[i].rank);//평균, 등급, 석차
		line(70);
		printf("             ");
		for (int j = 0; j < = SUB; j++) {
			printf("%7d ", stu[i].score[j]);
		}//과목별 점수,총점의 총점 출력
		printf("\n");
		line(65);

	}
	
}
