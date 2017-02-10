
#include <stdio.h>
int main() {
	char string[64];
	printf("What is your name?\n");
	fgets(string, 64, stdin);
	printf("Sup, %s Your trash\n", string);
	return 0;

}