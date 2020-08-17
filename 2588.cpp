#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int a, b;
	int result1, result2, result3;

	scanf("%d %d", &a, &b);
	
	result1 = a*(b % 10);
	printf("%d\n", result1);

	result2 = a*((b % 100)/10);
	printf("%d\n", result2);

	result3 = a*(b / 100);
	printf("%d\n", result3);

	printf("%d", result1 + (result2 * 10) + (result3 * 100));

	getchar();
	getchar();
	return 0;
}