#include <stdio.h>

int main() {
	int a, y = 0;
	for (a = 1; a < 10; a = a + 2) {
		y += a;
		printf("%d\n",y);
	}
}