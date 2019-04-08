#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#define PEOPLE 3	//약속으로 매크로 상수는 대문자로(바꿀수없는값은 대문자로)
#define SUB 4
void line(int);
int PEOPLE;
char sub_name[SUB][6] = { "국어", "영어", "수학", "c언어" };

struct student {
	char id[5];
	char name[7];
	int score[SUB + 1];//
	double avg;
	int rank;
	char a;
};

void print(struct student s)
{
	printf("\n%s %8s", s.id, s.name);

	for (int j = 0; j < SUB; j++)
		printf("%8d", s.score[j]);

	printf("%8d %10.2f\t", s.score[SUB], s.avg);
	//학번 이름 점수 총점 평균 출력

	switch ((int)s.avg / 10) {
	case 10:case 9:printf("A"); break;
	case 8:printf("B"); break;
	case 7:printf("C"); break;
	case 6: printf("D"); break;
	default:printf("F");
	}	//등급 출력
	printf("%8d\n", s.rank);	//석차 출력
	printf("\n");
	line(100);
}	//출력하는 것

void input(struct student *a)
{
	printf("학번 : ");
	scanf("%s", a->id);
	printf("이름 : ");
	scanf("%s", a->name);

	for (int j = 0; j < SUB; j++)
	{
		while (1)
		{
			printf("%s 점수 : ", sub_name[j]);
			scanf("%d", &a->score[j]); //int 타입에는 &를 붙여주어야 함
			if (!(a->score[j] < 0 || a->score[j]>100)) break;
			printf("점수 오류\n");
		}
	}
}

void total(struct student *s)
{
	for (int j = 0; j < SUB; j++)
	{
		s->score[SUB] += s->score[j];//총점
	}//총점계산
	s->avg = (float)s->score[SUB] / SUB;//평균
}

void rank(struct student *r)
{

}

int main()
{
	printf("몇 명을 입력하시겠습니까? ");
	scanf("%d", &PEOPLE);
	struct student *stu = (struct student *)malloc(sizeof(struct student)*PEOPLE);
	//struct student * 은 안써주어도 실행상의 문제가 없음
	/*int total[SUB + 1] = { 0 };
	float av[SUB + 1] = { 0 };*/

	printf("%d\n", sizeof(struct student));//방이 41이 출력되어야 하는데 4byte씩 늘어나기 때문에 44byte가 됨
										   //avg를 float에서 double로 바꾼다면 48이 됨
										   //구조체의 크기 중 가장 큰 사이즈로 잡게 됨. 따라서 8씩 증가됨.
	printf("%d\n", sizeof(stu));

	/*char id[PEOPLE][5],name[PEOPLE][7];
	int score[PEOPLE+1][SUB+1]={0};
	float avg[PEOPLE];
	int rank[PEOPLE];*/

	//입력
	for (int i = 0; i < PEOPLE; i++)
	{
		input(&stu[i]);
	}

	for (int i = 0; i < PEOPLE; i++)
	{
		(stu + i)->score[SUB] = 0;
	}
	for (int i = 0; i < PEOPLE; i++)
	{
		total(&stu[i]);
	}

	for (int i = 0; i < PEOPLE; i++)
	{
		(stu + i)->rank = 1;//석차 초기화
		printf("\n");
	}
	for (int i = 0; i < PEOPLE; i++)
	{
		for (int j = i + 1; j < PEOPLE; j++)
		{
			if ((stu + i)->score[SUB] <  (stu + j)->score[SUB])
			{
				(stu + i)->rank++;
			}
			else if ((stu + i)->score[SUB] > (stu + j)->score[SUB])
			{
				(stu + j)->rank++;
			}
		}
	}// 석차 계산
	line(100);
	printf("학번     이름");
	for (int i = 0; i < SUB; i++)
	{
		printf("%8s", sub_name[i]);
	} printf("\n");
	line(100);
	for (int i = 0; i < PEOPLE; i++)
	{
		print(stu[i]);
	}

	/*for (int i = 0; i < SUB + 1; i++) {
	for (int j = 0; j < PEOPLE; j++) {
	total[SUB + 1] = stu[i].score[j];
	}
	}// 총점의 총점

	for (int i = 0; i < SUB + 1; i++) {
	for (int j = 0; j < PEOPLE; j++) {
	av[SUB + 1] = (float)stu[i].score[j];
	}
	}*/

	//출력

}

void line(int k)
{
	for (int i = 0; i < k; i++)
		printf("=");
	printf("\n");
}