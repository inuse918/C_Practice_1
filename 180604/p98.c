#include <stdio.h>
int main() {
	/*int a, b, c = 0;
	a = ++c;
	printf("%d\n", c);
	b = c++;
	printf("%d\n", c);
	printf("%d %d %d\n", a, b, ++c);
	return 0;*/

	//ex
	int a = 2;
	int b = 3;
	int c = 4;
	int d = 0;
	printf("%d %d %d %d\n", a, b, c, d);
	d = a++ + -b - c++;
	printf("%d\n", d);
	printf("%d %d %d %d\n", a, b, c, d);
}