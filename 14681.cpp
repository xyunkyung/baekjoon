#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int x, y;

	scanf("%d %d", &x, &y);

	if (x > 0 && y > 0)
		printf("1\n");
	else if (x < 0 && y>0)
		printf("2\n");
	else if (x < 0 && y < 0)
		printf("3\n");
	else if (x > 0 && y < 0)
		printf("4\n");

	getchar();
	getchar();
	return 0;
}