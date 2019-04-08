#include <stdio.h>

void main() {
	int k, m;
	int d[10] = { 1,5,3,2,1,4,2,5,3,1 };
	int cnt[5] = { 0 };

	for (int i = 0; i < 10; i++) {
		switch(d[i]) {
		case 1: cnt[0]++; break;
		case 2: cnt[1]++; break;
		case 3: cnt[2]++; break;
		case 4: cnt[3]++; break;
		case 5: cnt[4]++; break;
		}
	}

	printf("1 | %d\n2 | %d\n3 | %d\n4 | %d\n5 | %d\n", cnt[0], cnt[1], cnt[2], cnt[3], cnt[4]);

	/*for (int i = 0; i < 10; i++) {
		for (int j = 1; j <= 5; j++) {
			if (d[i] == j) {
				cnt[j - 1]++;
			}
		}
	}
	for (int i = 0; i < 5; i++) {
		printf("%d | %d\n", i + 1, cnt[i]);
	}*/
}