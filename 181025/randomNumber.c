#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int cnt=1,answer=0;
	printf("���ڸ� ���纸����! (50~150)\n");
	srand((unsigned)time(NULL));
	int num = rand() % 101 + 50;
	//printf("%d\n", num);

	while (cnt <= 8) {
		printf("%d�� ° ���� �Է�: ",cnt);
		scanf("%d", &answer);
		if (answer == num) {
			printf("�����մϴ�! %d�� ���� ���߼̽��ϴ�.", cnt);
			break;
		}
		else if (answer > num) {
			printf("�Է��Ͻ� ���ڰ� �� Ů�ϴ�.\n");
		}
		else if (answer < num) {
			printf("�Է��Ͻ� ���ڰ� �� �۽��ϴ�.\n");
		}
		cnt++;
	}

	if (cnt > 8) {
		printf("�ƽ��Ե� 8�� �̳��� ������ ���߽��ϴ�.\n");
		printf("���� %d �Դϴ�!\n", num);
	}
	

}