#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 1;i <= n;i++) {
		for (int j = 1; j <= n; j++) {
			if (j > n - i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	getchar();
	getchar();
	return 0;
}