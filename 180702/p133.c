#include <stdio.h>

int main() {
	int a = 0;
	for (a = 1; a <= 10; a++)
	{
		printf("%3d", a);
		if (a % 5 == 0) break;
	}
	printf("\n");
	return 0;
}