#include <stdio.h>
//define num 6

void sort(int *, int size);
int main(void) {
	int i;
	int size = 5;
	//printf("1~100 ������ ������ �Է��Ͻÿ�.");
	//scanf_s("%d",size);
	int a[6];

	for (i = 1; i < 6; i++) {
		printf("1~100 ������ %d ��° ������ �Է��Ͻÿ� : ", i);
		//printf("\n %d,a[i]);
	}
	printf("�����ϱ� �� �Էµ� ��");
	for (i = 0; i < size; i++)
		printf("%5d", a[i]);
	printf("\n");
	sort(a, size);
	printf("�������� ������ ��");

	for (i = 0; i < size; i++) printf("%5d", a[i]);
	printf("\n");
	return 0;
}
void sort(int *a, int size) {
	int i, j;
	int temp;
	printf("�Լ����� ���� ������ ��");
	for (i = 0; i < size; i++)printf(" %5d", a[i]);
	printf("\n");

	for (i = 0; i < size - 1; i++)
		for (j = i + 1; j < size; j++)
			if (*(a + i) > *(a + j))
			{
				temp = *(a + j);
				*(a + i) = *(a + j);
				*(a + j) = temp;
			}
}

printf("�Լ����� ���� ������ ��");
for (i = 0; i < size; i++)
	printf("%5d", a[i]);