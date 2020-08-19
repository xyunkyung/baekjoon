#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int n, sum = 0;
	char x[101] = {};

	scanf("%d", &n);
	scanf("%s", &x);

	for (int i = 0; i < n; i++) {
		sum += x[i] - '0';
	}

	printf("%d", sum);

	getchar();
	getchar();
	getchar();
	return 0;
}