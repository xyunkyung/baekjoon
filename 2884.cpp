#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int h, m;

	scanf("%d %d", &h, &m);

	if (m >= 45)
		m -= 45;
	else {
		h -= 1;
		m = (m + 60) - 45;
	}

	if (h < 0)
		h += 24;

	printf("%d %d", h, m);

	getchar();
	getchar();
	return 0;
}