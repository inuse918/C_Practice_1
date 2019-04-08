#include <stdio.h>

void main() {
	int i;
	char *aaa[3] = { "kor","computer","school" };
	for (i = 0; i < 3; i++) {
		printf("aaa[%2d] data = %s  \n", i, aaa[i]);
		printf("aaa[%2d] data = %p  \n", i, aaa[i]);
		printf("aaa[%2d] data = %p  \n", i, &aaa[i]);
	}
	char a[] = "korea";
	printf ("%d, %d\n", sizeof(a), strlen(a));

	int *ppp = aaa;
	int aaa[3];
	int aaa2[3];

	ppp = aaa2;
	ppp++;


}