#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int n;

	scanf("%d", &n);

	for (int i = n; i >= 1; i--) {
		printf("%d\n", i);
	}

	getchar();
	getchar();
	return 0;
}