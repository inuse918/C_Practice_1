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
	char ID[5]; //�й�
	char Name[7]; //�̸�
	int score[SUB + 1]; //����
	double avg; //���
	char s; //��� (4byte ����)
	int rank; //���
}stu[PEOPLE];



void main() {
	/*struct student *p = stu;
	printf("%d\n", sizeof(struct student));
	printf("%d", sizeof(stu));
	char subname[SUB][6] = { "����","����","����","C���" };
	for (int i = 0; i < PEOPLE; i++) {
		printf("�й� (4�ڸ�) : ");
		scanf("%s", stu[i].ID);
		printf("�̸� (3����) : ");
		scanf("%s", stu[i].Name);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s ���� �Է� (0~100��) : ", subname[j]);
				scanf("%d", &stu[i].score[j]);
				if (stu[i].score[j] < 0 || stu[i].score[j]> 100) {
					printf("���� ����, ���Է�\n");
				}
				else break;
			}
		}
	}//�Է�*/
	struct student *p = stu;
	char subname[SUB][6] = { "����","����","����","C���" };
	for (int i = 0; i < PEOPLE; i++) {
		printf("�й� (4�ڸ�) : ");
		scanf("%s", (*p).ID);
		printf("�̸� (3����) : ");
		scanf("%s", (*p).Name);

		for (int j = 0; j < SUB; j++) {
			while (1) {
				printf("%s ���� �Է� (0~100��) : ", subname[j]);
				scanf("%d",&((*p).score[j]));
				if ((*p).score[j] < 0 || (*p).score[j]> 100) {
					printf("���� ����, ���Է�\n");
				}
				else break;
			}
		}
	}//�Է�
	printf("%s", (*p).ID);
	//printf("%s", (*(p+1)).ID);
	
}