#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void scanData(int n,double *pp) {
	for (int i = 0; i < n; i++) {
		//scanf("%d",p+i);
		scanf("%lf", &pp[i]);
	}
}
void printData(int num,double *p) {
	for (int i = 0; i < num; i++) {
		printf("%lf %p ", p[i],p+i);
	}printf("\n");
}

int main() {
	//int a[10];
	double *p = 0; //NULL
	//p = &a;
	int num = 0;
	
	printf("문자 입력 : ");
	scanf("%s", &num);
	p = (double *)malloc(sizeof(double)*num);

	scanData(num,p);
	printData(num,p);

	free(p);
}