#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverse(char *str) //리턴할 때 문자열이기 때문에 포인터 함수 사용
{
	char *p = (char *)malloc(strlen(str)+1); //+1은 NULL을 위해서
	int len = strlen(str);
	for (int i = len - 1; i >= 0; i--)
	{
		p[len - 1 - i] = str[i];
	}
	p[len] = '\0';
	return p;
}
int main()
{
	
	char str[100];
	printf("영문자 입력 : ");
	gets_s(str,100);
	printf("변환된 문자 : %s\n",reverse(str));
	return 0;
}