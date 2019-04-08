#include <stdio.h>

void main() {
	int i, j, s=0;
	static score[][3] = {
		{83,90,88},
		{84,85,90},
		{81,82,84},
		{86,86,92},
		{75,83,93}
	};

	printf("==========================\n");
	printf("  kor   eng   mat   total");
	
	for (i = 0; i < 5; i++) {
		printf("\n------------------------\n");
		for (j = 0; j < 3; j++) {
			printf("%5d", score[i][j]);
			s += score[i][j];
			//printf("%d", s);
		}
		s = 0;
		
	}
	printf("\n------------------------\n");
}