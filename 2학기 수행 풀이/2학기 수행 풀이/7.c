#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int prime(int n)
{
	int count = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i == 0)count++;
	}
	if (count == 0)return 1;
	else return 0;
}
int main()
{
	int last;
	int cnt = 0;
	printf("소수를 구하려는 최종 숫자를 입력하세요. ");
	scanf("%d", &last);
	for (int i = 1; i <= last; i++)
	{
		if (prime(i))
		{
			printf("%d ", i);
			cnt++;
		}
	}printf("\n2~ %d까지의 소수 개수 : %d \n", last,cnt);
	return 0;
}