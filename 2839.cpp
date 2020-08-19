#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main() {
	int n;
	int count = 0;

	scanf("%d", &n);

	while (n > 0) {
		if (n % 5 == 0) {
			n -= 5;
			count++;
		}
		else if (n % 3 == 0) {
			n -= 3;
			count++;
		}
		else if (n > 5) {
			n -= 5;
			count++;
		}
		else {
			count = -1;
			break;
		}
	}
	printf("%d", count);

	getchar();
	getchar();
	getchar();
	return 0;
}