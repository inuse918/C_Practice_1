#include <stdio.h>

void main() {
	struct MyStruct {
		char *name;
		int age;
		char *num;
	};
	struct MyStruct list[3] = { {"���ö",35, "345-6789"},{"ȫ�浿",40,"123-4567"},{"������",25,"212-3232"} };


	printf("���� ��ȭ��ȣ \n");
	printf(" ����  ����    ��ȭ��ȣ \n");
	for (int i = 0; i < 3; i++) {
		printf("%6s %3d %12s\n", list[i].name, list[i].age, list[i].num);
	}
	printf("%d\n", sizeof(struct MyStruct));
}