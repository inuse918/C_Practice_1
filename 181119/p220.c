#include <stdio.h>

struct student {
	int num;
	char *name;
	float kor;
	float mat;
};
void main() {
	//struct student st1, st2;
	/*st1.num = 10201;
	st1.name = "kim dongsu";
	st1.kor = 50;
	st1.mat = 60;
	st2.num = 10202;
	st2.name = "lee chaelsu";
	st2.kor = 30;
	st2.mat = 40;*/
	struct student st1 = { 10201,"kim dongsu",50,60 };
	struct student st2 = { 10202,"lee chaelsu",30,40 };

	printf("\n �й� %d,  ���� %s,  ���� %f,  ���� %f \n", st1.num, st1.name, st1.kor, st1.mat);
	printf("\n �й� %d,  ���� %s,  ���� %f,  ���� %f \n", st2.num, st2.name, st2.kor, st2.mat);

}