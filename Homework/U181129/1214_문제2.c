#include <stdio.h>
#include <string.h>
void main() {
	int i;
	char *name[] = { "kimsuchul","leeyongsu","kimdongsu","bakgicheal",
		"kimyongsuk","choigiwha","leesunhee","chebeangsuk", "songdalsu","hanjongsik" };
	printf("kimsuchul, leeyongsu, kimdongsu, bakgicheal, kimyongsuk \n");
	printf("choigiwha, leesunhee, chebeangsuk, songdalsu, hanjongsik\n");
	
	printf("k�� �����ϴ� �̸��� ");
	//printf("%d", sizeof(name));
	for (i = 0; i < 10; i++)
	{
		if (name[i][0] == 'k') 
		{
			printf(" %12s", name[i]);
		}
		
	}
	printf("\nk�� ���� �̸��� ");
	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j <strlen(name[i]); j++)
		{
			if (name[i][j] == 'k') 
			{
				printf(" %12s", name[i]);
				break;
			}
		}
	}
	printf("\n �̻��Դϴ� \n");
}