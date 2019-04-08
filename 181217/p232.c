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
	printf("\n 번호 :%.0f, 이름 :%c, 나이 :%d \n", list.number, list.name, list.age);
	list.name = "홍길동";
	printf("\n 번호 :%.0f, 이름 :%s, 나이 :%d \n", list.number, list.name, list.age);
	list.age = 17;
	printf("\n 번호 :%.0f, 이름 :%d, 나이 :%d \n", list.number, list.name, list.age);
	
	//printf("%d \n", sizeof(struct student));
	printf("\n 번호 :%d, 이름 :%d, 나이 :%d \n", &list.number, &list.name, &list.age);
}