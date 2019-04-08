#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int money;
	printf("금액 입력(천원단위까지 입력) : ");
	scanf("%d", &money);
	
	int unit =100000;
	while (unit>1000)
	{
		unit /= 2;
		int su = money / unit;
		money = money % unit;
		printf("%d원권 %d개\n", unit, su);
		unit /= 5;
		su = money / unit;
		money = money % unit;
		printf("%d원권 %d개\n", unit, su);
	}
	
	return 0;
}