#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pp(int n);
void main() {
	int num;
	scanf("%d", &num);
	printf("%2d", pp(num));
}
int pp(int n) {
	int temp = n, q,sum=0;
	/*int h, t, o;
	h = n / 100;
	t = (n / 10) % 10;
	o = n % 100 % 10;
	return h + t + o;*/
	while (temp != 0) {
		q = temp % 10;
		temp = temp / 10;
		sum += q;
	}
	return sum;
}