#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int binary_decimal(char input[])
{
	int sum = 0;
	for (int i = 0; i < 8; i++)
	{
		sum +=(int)(( input[i]-'0') * pow(2, 7-i));
	}
	return sum;
}
int main()
{
	char input[9];
	printf("2���� �Է�(8�ڸ�) : ");
	scanf("%s", input);
	binary_decimal(input);
	printf("10���� : %d\n", binary_decimal(input));
}