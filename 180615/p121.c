#define _CRT

#include <stdio.h>
int main() {
	int color;
	printf("������ ������ ? (1. �����  2. �Ķ���  3. ������) \n");
	scanf("%d", color);
	if (color == 1)printf("�����-A�� \n");
	else if (color == 2)printf("�Ķ���-B�� \n");
	else if (color == 3)printf("������-C�� \n");
	return 0;
}