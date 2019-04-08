#include <stdio.h>

int main() {

	int i = 1;
	int total = 0;

	while (total < 100) {
		total += i;
		i++;
	} printf("i = %d, total = %d\n", i, total);
	
}