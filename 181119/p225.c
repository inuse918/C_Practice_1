#include <stdio.h>

struct student {
	int number;
	char name[10];
	int kor;
	int eng;
	int mat;
	int sum;
	float avg;
};

int main(void) {
	struct student list[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("�й��� �Է��Ͻÿ�(����): ");
		scanf("%d", &list[i].number);
		printf("�̸��� �Է��Ͻÿ�(���ڿ�): ");
		scanf("%s", list[i].name,10);
		printf("���� ������ �Է��Ͻÿ�(����): ");
		scanf("%d", &list[i].kor);
		printf("���� ������ �Է��Ͻÿ�(����): ");
		scanf("%d", &list[i].eng);
		printf("�й��� �Է��Ͻÿ�(����): ");
		scanf("%d", &list[i].number);
	}
}