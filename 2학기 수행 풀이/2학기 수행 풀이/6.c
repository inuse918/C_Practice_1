#include <stdio.h>

int fact(int n)
{
	if (n == 1) return 1;
	else
	{
		return n * fact(n - 1);
	}
}
int main()
{
	int su;
	int sum = 0;
	printf("마지막 수 입력 : ");
	scanf_s("%d", &su);
	for (int i = 1; i <= su; i++)
	{
		if (i==su) printf("%d! = ", i);
		else printf("%d! + ",i);
		sum += fact(i);
	}
	printf("%d",sum);
	printf("\n");
	return 0;
}