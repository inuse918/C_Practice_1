#include<stdio.h>
int b;
	void f() {
	int a = 20;
	a = 0;
	printf("a�� %d�Դϴ�", a);
	int b = 50;
	printf("b�� %d�Դϴ�", b);
}

	int main() {
		f();

		int a = 10;
		{
			int a = 40;
		}
		printf("a�� %d �Դϴ�", a);
		printf("b�� %d �Դϴ�", b);
		printf("%d\n", sizeof(char));
		return 0;
	}



