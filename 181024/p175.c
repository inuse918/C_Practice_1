#include <stdio.h>
#include <stdlib.h> //random�Լ��� ����Ͽ��� ����
#include <time.h> //srand ���� time�̶�� �Լ��� ����ϱ� ����. 

void main() {
	int m, num, cnt;

	srand((unsigned)time(NULL));
	cnt = 0;
	for (m = 1; m <= 10; m++) {
		num = rand() ;
		printf("%3d", num);
		cnt++;
		//if (cnt % 4 == 0)
			printf("\n");
	}
	printf("\n");
}