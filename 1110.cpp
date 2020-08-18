#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int n;
	int cycle = 0;
	int result;
	int a, b, c, d;

	scanf("%d", &n);
	result = n;

	while (1) {
		a = n / 10;
		b = n % 10;
		c = (a + b) % 10;
		d = (b * 10) + c;
		n = d;
		cycle++;

		if (d == result)
			break;
	}
	printf("%d", cycle);

	getchar();
	getchar();
	return 0;
}