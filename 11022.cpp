#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int t;
	int a, b;

	scanf("%d", &t);

	for (int i = 1; i <= t; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}

	getchar();
	getchar();
	return 0;
}