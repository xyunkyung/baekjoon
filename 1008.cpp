#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	double a, b;

	scanf("%lf %lf", &a, &b);

	if (a > 0 && b < 10)
		printf("%.16lf", a/b);

	getchar();
	getchar();
	return 0;
}