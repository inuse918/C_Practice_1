#include <stdio.h>
#include <stdlib.h>
#define NUM 6
#define TRUE 1
void sort(int *, int size);
int main(void)
{
	int i=0;
	int failCnt=0;
	int size = 5;
	//printf("1~100 ������ ������ �Է��Ͻÿ�. ");
	//scanf_s("%d",&size);
	int a[6];

	while (TRUE)
	{
		printf("1~100 ������ %d ��° ������ �Է��Ͻÿ� : ", i + 1);
		scanf_s("%d", &a[i]);
		//printf("%d", a[i]);
		if (a[i] > 100 || a[i] < 0) 
		{
			printf("1~100 ������ ������ �ٽ� �Է��� �ּ���.\n");
			failCnt ++ ; 
			if (failCnt == 2)
			{
				printf("�߸��� ���� �� �� �Է��Ͽ� ���α׷��� �����մϴ�. \n");
				exit(0);
			}
			continue;
		}
		//printf("\n %d",a[i]);
		i++;
		if (i == 5) break;
	}
	printf("�����ϱ� �� �Էµ� �� ");
	for (i = 0; i < size; i++)
	{
		printf(" %5d", a[i]);
	}
	printf("\n");
	sort(a,size);
	return 0;
}
void sort(int *a, int size)
{
	int i, j;
	int temp;
	for (i = 0; i < size-1; i++)
	{
		for (j = i + 1; j <size; j++)
		{
			if (*(a + i) > *(a + j))
			{
				temp = *(a + i);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
		}
	}
	printf("�Լ����� ���� ������ �� ");
	for (i = 0; i < size; i++)
	{
		printf(" %d", a[i]);
	}
	printf("\n");
	return ;

}