#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct student {
	int score[3];
	int grade;
};
int main()
{
	int su;
	printf("�л��� �Է� : ");
	scanf("%d", &su);
	struct student *st = (struct student *)malloc(sizeof(struct student) *su));
	for (int i = 0; i < su; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("���� %d �Է� : ", j+1);
			scanf("%d", &(st[i].score[j]));
			if (st[i].score[j] < 0 || st[i].score[j]>100)
			{
				printf("�ٽ� �Է��ϼ���.====>");
				j--;
				continue;
			}
		}
		printf("\n");
	}
	for (int i = 0; i < su; i++) {
		printf("%d", i + 1);
		for (int j = 0; j < 3; j++)
		{
			printf("%d", st[i].score[j]);
		}
	}
}