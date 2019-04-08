#include <stdio.h>

void main() {
	char c[2][3] = {"ab"};
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			if (c[i][j] = 0) {
				printf("*");
			}
			else {
				printf("%d", c[i][j]);
			}
		}
	}

}