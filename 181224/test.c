#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *fi;
	FILE *fo=NULL;
	//int ID;
	char c;
	char buf[100];
	
	fi = fopen("test.c", "r");
	fo = fopen("out.dat", "a");

	if (fi == NULL) 
	{
		printf("입력 FILE 오픈 실패");
		return 0;
	}
	/*while ((c=fgetc(fi)) != EOF)
	{
		fputc(c,fo);
		putchar(c);
	}*/
	while (fgets(buf, 100, fi) != NULL)
		fputs(buf, fo);

	/*scanf("%d", &ID);
	printf("%d\n", ID);
	fprintf(fo,"%d\n", ID);*/

	fclose(fi);
	fclose(fo);
}