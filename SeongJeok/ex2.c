#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PEOPLE 3	//약속으로 매크로 상수는 대문자로(바꿀수없는값은 대문자로)
#define SUB 4
void line(int);

struct student {
	char id[5];
	char name[7];
	int score[SUB + 1];//
	double avg;
	int rank;
	char a;
}stu[PEOPLE];

int main() {
	printf("몇 명을 입력하시겠습니까? ");
	int total[SUB + 1] = { 0 };
	float av[SUB + 1] = { 0 };

	printf("%d\n", sizeof(struct student));//방이 41이 출력되어야 하는데 4byte씩 늘어나기 때문에 44byte가 됨
										   //avg를 float에서 double로 바꾼다면 48이 됨
										   //개발자가 구조체의 크기 중 가장 큰 사이즈로 잡게 됨. 따라서 8씩 증가됨.
	printf("%d\n", sizeof(stu));

	/*char id[PEOPLE][5],name[PEOPLE][7];
	int score[PEOPLE+1][SUB+1]={0};
	float avg[PEOPLE];
	int rank[PEOPLE];*/
	char sub_name[SUB][6] = { "국어", "영어", "수학", "c언어" };

	//입력
	for (int i = 0; i < PEOPLE; i++) {
		printf("학번 : ");
		scanf("%s", &stu[i].id);
		printf("이름 : ");
		scanf("%s", stu[i].name);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s 점수 : ", sub_name[j]);
				scanf("%d", &stu[i].score[j]);
				if (!(stu[i].score[j] < 0 || stu[i].score[j]>100)) break;
				printf("점수 오류\n");
			}
		}	//점수 입력

	}
	for (int i = 0; i < PEOPLE; i++) {
		for (int j = 0; j < SUB; j++) {
			stu[i].score[SUB] += stu[i].score[j];//총점
		}//총점계산
		stu[i].avg = (float)stu[i].score[SUB] / SUB;//평균
		stu[i].rank = 1;//석차 초기화

		printf("\n");
	}

	for (int i = 0; i < PEOPLE - 1; i++) {
		for (int j = i + 1; j < PEOPLE; j++) {
			if (stu[i].score[SUB] < stu[i].score[SUB])
				stu[i].rank++;
			else if (stu[i].score[SUB] > stu[j].score[SUB])
				stu[j].rank++;
		}
	}	//석차 계산

	for (int i = 0; i < SUB + 1; i++) {
		for (int j = 0; j < PEOPLE; j++) {
			total[SUB + 1] = stu[i].score[j];
		}
	}// 총점의 총점

	for (int i = 0; i < SUB + 1; i++) {
		for (int j = 0; j < PEOPLE; j++) {
			av[SUB + 1] = (float)stu[i].score[j];
		}
	}

	//출력
	line(100);
	for (int i = 0; i < PEOPLE; i++) {
		printf("\n%-8s%-8s", stu[i].id, stu[i].name);

		for (int j = 0; j < SUB; j++)
			printf("%8d", stu[i].score[j]);

		printf("%8d%10.2f\t", stu[i].score[SUB], stu[i].avg);
		//학번 이름 점수 총점 평균 출력

		switch ((int)stu[i].avg / 10) {
		case 10:case 9:printf("A"); break;
		case 8:printf("B"); break;
		case 7:printf("C"); break;
		case 6: printf("D"); break;
		default:printf("F");
		}	//등급 출력

		printf("%8d\n", stu[i].rank);	//석차 출력

		printf("\n");

		line(100);



	}	//출력하는 것

	printf("총점의 총점 : %3d ", total[SUB + 1]);
	printf("총점의 평균 : %3f ", av[SUB + 1]);

	return 0;
}

void line(int k) {
	for (int i = 0; i < k; i++)
		printf("=");
	printf("\n");
}