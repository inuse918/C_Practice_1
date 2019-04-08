#include <stdio.h>

int main() {
	char a[8] = "Myclass"; //a는 Myclass의 시작주소를 가지고 있음.
	printf("%s\n",a);
	printf("%s\n", &a[2]);
}