#include <stdio.h>

void main() {
	int a[2][3] = { {1,2,3},{4,5,6} };

	for (int i = 0; i <3; i++) {
		for (int j = 0; i <4; j++) {
			printf("%d", a[i][j]);
		}
	}printf("\n");
}