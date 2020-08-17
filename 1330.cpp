#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int a, b;

	scanf("%d %d", &a, &b);
	
		if (a > b)
			printf(">\n");
		if (a < b)
			printf("<\n");
		if (a == b)
			printf("==");
	

	getchar();
	getchar();
	return 0;
}