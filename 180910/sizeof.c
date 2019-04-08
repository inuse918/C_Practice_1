#include <stdio.h>

int main() {
	double a[2][3][3];

	printf("%d\n", sizeof a);

	printf("%d\n", &a[0][0][0]);
	printf("%d\n", &a[0][2][2]);
	printf("%x\n", &a[0][0][0]);
	printf("%x\n", &a[0][2][2]);
}