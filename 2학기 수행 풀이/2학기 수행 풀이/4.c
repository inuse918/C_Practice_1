#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *reverse(char *str) //������ �� ���ڿ��̱� ������ ������ �Լ� ���
{
	char *p = (char *)malloc(strlen(str)+1); //+1�� NULL�� ���ؼ�
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
	printf("������ �Է� : ");
	gets_s(str,100);
	printf("��ȯ�� ���� : %s\n",reverse(str));
	return 0;
}