#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int com[3];//��ǻ�Ͱ� �����ϴ� ����
	int user[3];//����ڰ� �Է��ϴ� ����
	int str=0;
	int ball = 0;

	srand((unsigned)time(0));

	for (int i = 0; i < 3; i++) {
		com[i] = rand() % 10;
		for (int j = 0; j < i; j++) {
			if (com[i] == com[j]) {
				i--;
			}
		}
	}// ������ �� 3�� �߻�, ���ϼ��� ó��

	for (int i = 0; i < 3; i++) {
		scanf("%d", &user[i]);
	}

	for (int i = 0; i < 3; i++) {
		if (com[i] == user[i]) str++;
		for (int j = 0; i < 3; j++) {
			if (com[i] == user[j]) ball++;
		}
		if (ball>0) ball = ball- str;
	}

	if (str == 3) printf("correct !\n");
	else if (str + ball == 0) printf("out !\n");
	else {
		printf("%d stike\n", str);
		printf("%d ball\n", ball);
	}
	
}