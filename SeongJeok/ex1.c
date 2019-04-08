#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#define PEOPLE 3	//������� ��ũ�� ����� �빮�ڷ�(�ٲܼ����°��� �빮�ڷ�)
#define SUB 4
void line(int);
int PEOPLE;
char sub_name[SUB][6] = { "����", "����", "����", "c���" };

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
	//�й� �̸� ���� ���� ��� ���

	switch ((int)s.avg / 10) {
	case 10:case 9:printf("A"); break;
	case 8:printf("B"); break;
	case 7:printf("C"); break;
	case 6: printf("D"); break;
	default:printf("F");
	}	//��� ���
	printf("%8d\n", s.rank);	//���� ���
	printf("\n");
	line(100);
}	//����ϴ� ��

void input(struct student *a)
{
	printf("�й� : ");
	scanf("%s", a->id);
	printf("�̸� : ");
	scanf("%s", a->name);

	for (int j = 0; j < SUB; j++)
	{
		while (1)
		{
			printf("%s ���� : ", sub_name[j]);
			scanf("%d", &a->score[j]); //int Ÿ�Կ��� &�� �ٿ��־�� ��
			if (!(a->score[j] < 0 || a->score[j]>100)) break;
			printf("���� ����\n");
		}
	}
}

void total(struct student *s)
{
	for (int j = 0; j < SUB; j++)
	{
		s->score[SUB] += s->score[j];//����
	}//�������
	s->avg = (float)s->score[SUB] / SUB;//���
}

void rank(struct student *r)
{

}

int main() 
{
	printf("�� ���� �Է��Ͻðڽ��ϱ�? ");
	scanf("%d", &PEOPLE);
	struct student *stu = (struct student *)malloc(sizeof(struct student)*PEOPLE); 

	//struct student * �� �Ƚ��־ ������� ������ ����

	//�Է�
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
		(stu + i)->rank = 1;//���� �ʱ�ȭ
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
			else if ((stu+i)->score[SUB] > (stu+j)->score[SUB]) 
			{
				(stu + j)->rank++;
			}
		}
	}// ���� ���
	line(100);
	printf("�й�     �̸�");
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
	}// ������ ����

	for (int i = 0; i < SUB + 1; i++) {
		for (int j = 0; j < PEOPLE; j++) {
			av[SUB + 1] = (float)stu[i].score[j];
		}
	}*/

	//���
	
}

void line(int k) 
{
	for (int i = 0; i < k; i++)
		printf("=");
	printf("\n");
}