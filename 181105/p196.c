#include <stdio.h>

void main() {
	int a[5] = { 10,20,30,40,50 };
	int i;
	int *p;
	p = a;
	for (i = 0; i < 5; i++) {
		printf("[%d] = %d \n", i, *(p + i));
	}
	for (int i = 0; i <= 4; i++) {
		printf("[%d] \n", a[i]);
	}
	/*while (p != NULL) {
		printf("%d \n", *(p++));
	}*/
	for (i = 0; i < 5; i++) {
		printf("[%d] = %d \n", i, p + i); //������ Ÿ�Կ� ���� ����
	}
	for (int i = 0; i <= 4; i++) {
		printf("[%d] \n", &a[i]);
	}
}