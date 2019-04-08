#include <stdio.h>

main() {
	int i;
	char ch;
	char str[6] = "ABCDE";
	printf("--문자열 변경 전--\n");
	printf("%s \n", str);
	for (i = 0; i < 6; i++) {
		printf("%c *", str[i]);
	}

	for (i = 0; i < 3; i++) {
		ch = str[4 - i];
		str[4 - i] = str[i];
		str[i] = ch;
	}
	printf("\n--문자열 변경 후--\n");
	printf("%s\n", str);
	return 0;
}