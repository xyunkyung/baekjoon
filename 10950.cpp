#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int t, a, b;
	int i;

	scanf("%d", &t);
	
	for (i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	

	getchar();
	getchar();
	return 0;
}