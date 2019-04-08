#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	char ch;
	scanf("%c", &ch);

	switch (ch) {
	case 'A':case 'a':printf("Apple\n");
	case 'B':case 'b':printf("Banana\n");
	case 'C':case 'c':printf("Coconut\n");
	case 'D':case 'd':printf("Durian\n"); break;
	default: printf("Error\n"); break;
	}
	return 0;
}