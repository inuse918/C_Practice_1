#include <stdio.h>

void main() {
	// 1~7 Ȧ���� ��
	//int sum = 0;

	//for (int a = 1; a <= 7; a+=2) {
		//sum += a;
	//}

	//printf("sum = %d\n" , sum);


	// ������

	//while
	/*int a = 1;
	int sum = 0;
	while (1){
		sum += a;
		if (a >= 7) break; //�ܰ� 6
		a += 2; 
	}
	printf("%d\n", sum);*/

	//for 

	int sum = 0;
	for (int a = 1; a <= 7; sum += a , a += 2) 
	printf("%d\n", sum);
}