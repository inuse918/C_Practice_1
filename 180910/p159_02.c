#include <stdio.h>

int main() {
	int su[7] = { 1,0,1,1,0,1,1 };
	int a=0, cnt=0, pa=0;

	for (int i = 0; i < 7; i++) {
		if (su[i]==1) {
			cnt++;
		}
	}
	if (cnt % 2 == 0) {
		printf("1");
	}
	else printf("0\n");
}