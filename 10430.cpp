#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a >= 2 && a <= 10000 && b >= 2 && b <= 10000 && c >= 2 && c <= 10000) {
		printf("%d\n", (a + b) % c);
		printf("%d\n", ((a%c) + (b%c)) % c);
		printf("%d\n", (a*b) % c);
		printf("%d\n", ((a%c)*(b%c)) % c);
	}

	getchar();
	getchar();
	return 0;
}