#include <stdio.h>

void main() {
	char c[][10] = { "school","subject","program","study" };
	printf("%x\n", &c[0][0]);
	printf("%x\n", c[0]);
	printf("%x\n", &c[1][0]);
	printf("%x", c[1]);
	
	printf("%s", &c[2][3]);
}