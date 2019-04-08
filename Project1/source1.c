#include<stdio.h>
int b;
	void f() {
	int a = 20;
	a = 0;
	printf("a는 %d입니다", a);
	int b = 50;
	printf("b는 %d입니다", b);
}

	int main() {
		f();

		int a = 10;
		{
			int a = 40;
		}
		printf("a는 %d 입니다", a);
		printf("b는 %d 입니다", b);
		printf("%d\n", sizeof(char));
		return 0;
	}



