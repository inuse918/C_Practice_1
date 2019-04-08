#include <stdio.h>

int main() {
	double a[] = {1,2,3};
	for (int i = 0; i < sizeof(a)/sizeof(double); i++) {
		printf("%f ",a[i]);
	}printf("\n");
}