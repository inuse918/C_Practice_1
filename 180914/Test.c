#include <stdio.h>

void main() {
	char b[2][3];
	int c[5];
	char a[3][5][4];

	printf("%d\n", sizeof b);
	printf("%d\n", sizeof b[0]);
	printf("%d\n", sizeof c);
	printf("%d\n", sizeof (a));
	printf("%d\n", sizeof a[0]);
	printf("%d\n", sizeof a[0][0]); //a[1][1]... 등 모두 같음
}

