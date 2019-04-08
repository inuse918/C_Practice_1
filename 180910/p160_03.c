#include <stdio.h>

void main() {
	static int a[5][5];

	a[0][0] = 1; // a[5][5]={1};
	printf("%d\n", a[0][0]);

	for (int i = 1; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (j == 0) {
				a[i][j] = a[i - 1][j];
				if (a[i][j] == 0) printf("");
				else printf("%d ", a[i][j]); 
			}
			else {
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
				if (a[i][j] == 0)printf("");
				else printf("%d ", a[i][j]);

			}
			
			
		}printf("\n");
		
	}


}