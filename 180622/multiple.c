#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int small, big,a,b;
	printf("�ϰ���� �� �� �� �Է� : ");
	scanf("%d%d",&a,&b);

	if (a > b) {
		big = a;
		small = b;
	}
	else if (a<b) {
		big = b;
		small = a;
	}
	for (int aa = small; aa <= big; aa++) {
		for (int bb = 1; bb <= 9; bb++) {
			printf("%d * %d = %d\t\n", aa, bb, aa*bb);
		}
		printf("\n");
	}

}