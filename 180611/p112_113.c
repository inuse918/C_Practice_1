#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {

	//06
	/*int a = 5, b = 3, c;
	c = a * (a - b) - (a < b) * 2;
	printf("%d\n", c);*/

	//07
	/*const c = 2;
	float func(float x) {
		return x / c;
	}

	void main() {
		int a;
		int b;
		scanf("%f", &a);
		b = func(a);
		printf("%f %d",a, b);*/


	//08

	int a = 2, b = 3, c, d;
	c = a || b;
	d = a | b;
	printf("%d\n", c + d);
}