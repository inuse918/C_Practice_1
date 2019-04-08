#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PEOPLE 3	//������� ��ũ�� ����� �빮�ڷ�(�ٲܼ����°��� �빮�ڷ�)
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
	printf("�� ���� �Է��Ͻðڽ��ϱ�? ");
	int total[SUB + 1] = { 0 };
	float av[SUB + 1] = { 0 };

	printf("%d\n", sizeof(struct student));//���� 41�� ��µǾ�� �ϴµ� 4byte�� �þ�� ������ 44byte�� ��
										   //avg�� float���� double�� �ٲ۴ٸ� 48�� ��
										   //�����ڰ� ����ü�� ũ�� �� ���� ū ������� ��� ��. ���� 8�� ������.
	printf("%d\n", sizeof(stu));

	/*char id[PEOPLE][5],name[PEOPLE][7];
	int score[PEOPLE+1][SUB+1]={0};
	float avg[PEOPLE];
	int rank[PEOPLE];*/
	char sub_name[SUB][6] = { "����", "����", "����", "c���" };

	//�Է�
	for (int i = 0; i < PEOPLE; i++) {
		printf("�й� : ");
		scanf("%s", &stu[i].id);
		printf("�̸� : ");
		scanf("%s", stu[i].name);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s ���� : ", sub_name[j]);
				scanf("%d", &stu[i].score[j]);
				if (!(stu[i].score[j] < 0 || stu[i].score[j]>100)) break;
				printf("���� ����\n");
			}
		}	//���� �Է�

	}
	for (int i = 0; i < PEOPLE; i++) {
		for (int j = 0; j < SUB; j++) {
			stu[i].score[SUB] += stu[i].score[j];//����
		}//�������
		stu[i].avg = (float)stu[i].score[SUB] / SUB;//���
		stu[i].rank = 1;//���� �ʱ�ȭ

		printf("\n");
	}

	for (int i = 0; i < PEOPLE - 1; i++) {
		for (int j = i + 1; j < PEOPLE; j++) {
			if (stu[i].score[SUB] < stu[i].score[SUB])
				stu[i].rank++;
			else if (stu[i].score[SUB] > stu[j].score[SUB])
				stu[j].rank++;
		}
	}	//���� ���

	for (int i = 0; i < SUB + 1; i++) {
		for (int j = 0; j < PEOPLE; j++) {
			total[SUB + 1] = stu[i].score[j];
		}
	}// ������ ����

	for (int i = 0; i < SUB + 1; i++) {
		for (int j = 0; j < PEOPLE; j++) {
			av[SUB + 1] = (float)stu[i].score[j];
		}
	}

	//���
	line(100);
	for (int i = 0; i < PEOPLE; i++) {
		printf("\n%-8s%-8s", stu[i].id, stu[i].name);

		for (int j = 0; j < SUB; j++)
			printf("%8d", stu[i].score[j]);

		printf("%8d%10.2f\t", stu[i].score[SUB], stu[i].avg);
		//�й� �̸� ���� ���� ��� ���

		switch ((int)stu[i].avg / 10) {
		case 10:case 9:printf("A"); break;
		case 8:printf("B"); break;
		case 7:printf("C"); break;
		case 6: printf("D"); break;
		default:printf("F");
		}	//��� ���

		printf("%8d\n", stu[i].rank);	//���� ���

		printf("\n");

		line(100);



	}	//����ϴ� ��

	printf("������ ���� : %3d ", total[SUB + 1]);
	printf("������ ��� : %3f ", av[SUB + 1]);

	return 0;
}

void line(int k) {
	for (int i = 0; i < k; i++)
		printf("=");
	printf("\n");
}