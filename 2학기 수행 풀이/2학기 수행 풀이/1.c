#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main()
{
	int score;
	int star[5] = { 0 };
	printf("���� �Է� : ");
	int max = 0;
	int min = 100; //0~100 ������ ������ �Է��ϴ� �� �̱� ������
	while (1)
	{
		scanf("%d", &score);
		if (score < 0) break;
		switch (score/10)
		{
		case 10:case 9: star[0]++; break;
		case 8: star[1]++; break;
		case 7: star[2]++; break;
		case 6: star[3]++; break;
		default: star[4]++;
		}
		if (score > max) max = score;
		if (min > score)min = score;
	}

	char *label[] = { "90�� �̻�","80�� ��","70�� ��","60�� ��","60�� �̸�" };
	for (int i = 0; i < sizeof(star); i++)
	{
		printf("%s : ", label[i]);
		for (int j = 0; j < star[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("�ְ� ���� : %d", max);
	printf("���� ���� : %d", min);
	
	return 0;
}