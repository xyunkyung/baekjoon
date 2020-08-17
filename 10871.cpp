#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int n, x;
	int a;

	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++) {
		scanf("%d", &a);

		if (a < x) {
			printf("%d ", a);
		}
	}

	getchar();
	getchar();
	return 0;
}