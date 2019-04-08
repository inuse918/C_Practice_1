#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int  main()
{
	int score;
	int star[5] = { 0 };
	printf("점수 입력 : ");
	int max = 0;
	int min = 100; //0~100 사이의 정수를 입력하는 것 이기 때문에
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

	char *label[] = { "90점 이상","80점 대","70점 대","60점 대","60점 미만" };
	for (int i = 0; i < sizeof(star); i++)
	{
		printf("%s : ", label[i]);
		for (int j = 0; j < star[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("최고 점수 : %d", max);
	printf("최저 점수 : %d", min);
	
	return 0;
}