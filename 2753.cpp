#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int year;

	scanf("%d", &year);

	if ((year % 4) == 0 && ((year % 100) != 0 || (year % 400) == 0))
		printf("1\n");
	else
		printf("0");

	getchar();
	getchar();
	return 0;
}