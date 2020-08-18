#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int n, x;
	int max = -1000000;
	int min = 1000000;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &x);

		if (x < min) {
			min = x;
		}
		if (x > max) {
			max = x;
		}
	}

	printf("%d %d\n", min, max);

	getchar();
	getchar();
	return 0;
}