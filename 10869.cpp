#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int a, b;

	scanf("%d %d", &a, &b);

	if (a >= 1 && a <= 10000 && b >= 1 && b <= 10000) {
		printf("%d\n", a + b);
		printf("%d\n", a - b);
		printf("%d\n", a*b);
		printf("%d\n", a / b);
		printf("%d\n", a%b);
	}

	getchar();
	getchar();
	return 0;
}