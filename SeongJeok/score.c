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
	char ID[5]; //�й�,
	char Name[7]; //�̸�
	int score[SUB + 2]; //����
	double avg; //���
	char s; //��� (4byte ����)
	int rank; //���
}stu[PEOPLE];
int main() {
	struct student *p = stu;
	
	char subname[SUB][6] = { "����","����","����","C���" };
	for (int i = 0; i < PEOPLE; i++) {
		printf("�й� (4�ڸ�) : ");
		scanf("%s", stu[i].ID);
		printf("�̸� (3����) : ");
		scanf("%s", stu[i].Name);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s ���� �Է� (0~100��) : ",subname[j]);
				scanf("%d", &stu[i].score[j]);
				if (stu[i].score[j] < 0 || stu[i].score[j]> 100) {
					printf("���� ����, ���Է�\n");
					continue;
				}
				else break;
			}
		}
	}//�Է�

	for (int i = 0; i < PEOPLE; i++) {
		for (int j = 0; j < SUB; j++) {
			stu[i].score[SUB] += stu[i].score[j];
		}//���� ���
		stu[i].score[SUB+1] += stu[i].score[SUB];//������ ����
		stu[i].avg = (float)stu[i].score[SUB] / SUB; //��հ��

		switch ((int)stu[i].avg / 10) {
		case 10: case 9:stu[i].s = 'A'; break;
		case 8:stu[i].s = 'B'; break;
		case 7:stu[i].s = 'C'; break;
		case 6:stu[i].s = 'D'; break;
		default: stu[i].s = 'F';
		}//��� ���
	} //���� ��� ��� ���

	for (int i = 0; i < SUB; i++) {
		for (int j = 0; j < PEOPLE; j++) {
			stu[i].score[j] += stu[j].score[i];
		}
	}
	// ���� ������ ���
	
	for (int i = 0; i < PEOPLE; i++) {
		stu[i].rank = 1;
	}//���� �ʱ�ȭ
	
	for (int i = 0; i < PEOPLE; i++) {
		for (int j = i+1; j < PEOPLE; j++) {
			if (stu[i].score[SUB] < stu[j].score[SUB]) {
				stu[i].rank++;
			}
			else if (stu[i].score[SUB] > stu[j].score[SUB]) {
				stu[j].rank++;
			}
		}
	}// ���� ���
	line(70);
	printf("�й�  �̸�  ");

	for (int i = 0; i < SUB; i++) {
		printf("%8s", subname[i]);
	}printf("\n");
	line(70);

	for (int i = 0; i < PEOPLE; i++) 
	{
		printf("%s %s ", stu[i].Name, stu[i].ID);//�̸� ���
		for (int j = 0; j <= SUB+1; j++) 
		{
			printf("%8d", stu[i].score[j]);
		}
		//���� ���� ���

		printf("%8.2f %c %2d��\n", stu[i].avg, stu[i].s,stu[i].rank);//���, ���, ����
		line(70);
		printf("             ");
		for (int j = 0; j < = SUB; j++) {
			printf("%7d ", stu[i].score[j]);
		}//���� ����,������ ���� ���
		printf("\n");
		line(65);

	}
	
}
