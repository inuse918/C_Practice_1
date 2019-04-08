//#include <stdio.h>
//void Second();

void First() {
	printf("Call function First\n");
	Second();
}

void Second(){
	printf("Call function Second\n");
}

int main() {
	printf("Start call function\n");
	First();
	printf("End call function\n");
	return 0;
}