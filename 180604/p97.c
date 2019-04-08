#include <stdio.h>

int main() {

	int b = 0;
	b = a++ + 5;

	b = ++a + 5;
	printf ("%d\n %d\n",b,b);
}