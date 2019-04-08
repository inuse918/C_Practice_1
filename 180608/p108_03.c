#include <stdio.h>

void main() {
	// 1~7 È¦¼öÀÇ ÇÕ
	//int sum = 0;

	//for (int a = 1; a <= 7; a+=2) {
		//sum += a;
	//}

	//printf("sum = %d\n" , sum);


	// ¼±»ý´Ô

	//while
	/*int a = 1;
	int sum = 0;
	while (1){
		sum += a;
		if (a >= 7) break; //´Ü°è 6
		a += 2; 
	}
	printf("%d\n", sum);*/

	//for 

	int sum = 0;
	for (int a = 1; a <= 7; sum += a , a += 2) 
	printf("%d\n", sum);
}