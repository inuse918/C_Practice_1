#include <stdio.h>

union student
{	
	double number;
	char *name;
	int age;
};

int main(void)
{
	union student list ;

	list.number = 20101;
	printf("\n ��ȣ :%.0f, �̸� :%c, ���� :%d \n", list.number, list.name, list.age);
	list.name = "ȫ�浿";
	printf("\n ��ȣ :%.0f, �̸� :%s, ���� :%d \n", list.number, list.name, list.age);
	list.age = 17;
	printf("\n ��ȣ :%.0f, �̸� :%d, ���� :%d \n", list.number, list.name, list.age);
	
	//printf("%d \n", sizeof(struct student));
	printf("\n ��ȣ :%d, �̸� :%d, ���� :%d \n", &list.number, &list.name, &list.age);
}