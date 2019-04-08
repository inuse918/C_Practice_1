#include <stdio.h>

int max(int p, int q);
void main() {
	int p, q;
	p = 5;
	q = 3;
	printf("%d\n", max(p,q));
}
int max(int p,int q) {
	if (p > q)
		return p;
	else
		return q;
}