#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int money;
	printf("�ݾ� �Է�(õ���������� �Է�) : ");
	scanf("%d", &money);
	
	int unit =100000;
	while (unit>1000)
	{
		unit /= 2;
		int su = money / unit;
		money = money % unit;
		printf("%d���� %d��\n", unit, su);
		unit /= 5;
		su = money / unit;
		money = money % unit;
		printf("%d���� %d��\n", unit, su);
	}
	
	return 0;
}