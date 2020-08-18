#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int a[9];
	int max = 0;
	int index;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &a[i]);

		if (a[i] > max) {
			max = a[i];
			index = i;
		}
	}
	printf("%d\n%d", max, index+1);

	getchar();
	getchar();
	return 0;
}