#include <stdio.h>
#include <stdlib.h> //random함수를 사용하였기 때문
#include <time.h> //srand 에서 time이라는 함수를 사용하기 때문. 

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