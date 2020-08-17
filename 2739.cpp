#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int n, i;
	int result;

	scanf("%d", &n);

	for (i = 1; i <= 9; i++) {
		result = n*i;
		printf("%d * %d = %d\n", n, i, result);
	}

	getchar();
	getchar();
	return 0;
}