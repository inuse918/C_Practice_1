#include <stdio.h>

main(void) {
	FILE *fp1 = NULL;;
	FILE *fp2 = NULL;
	int c;
	
	fp1 = fopen("D:test1.txt", "r");
	fp2 = fopen("D:test2.txt", "w");

	if (fp1 == NULL)
		printf("���� ���� ���� ����\n");
	
	printf("fgetc() ������\n");
	while ((c = getc(fp1)) != EOF) 
	{
		putchar(c);
		fputc(c, fp2);
	}
	printf("\n");
	fclose(fp1); fclose(fp2);
}
