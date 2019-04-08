#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>


void main() {
	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%c",i + 64);
		}
		printf("\n");
	}
	//printf("\n");
}