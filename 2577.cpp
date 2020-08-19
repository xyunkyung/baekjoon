#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int a;
	int b[10];
	int result=1;

	for (int i = 0; i < 3; i++) {
		scanf("%d", &a);
		result *= a;
	}

	for (int i = 0; result > 0;i++) {
		a = result % 10;
		b[a] += 1;
		result /= 10;
	}

	for (int i = 0;i < 10;i++) {
		printf("%d\n", b[i]);
	}

	getchar();
	getchar();
	return 0;
}