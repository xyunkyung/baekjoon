#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int t, r;
	char s[21];
	char p[200];

	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %s", &r, s);

		for (int j = 0; j < 21; j++) {
			for (int k = 0; k < r; k++) {
				p[r*j + k] = s[j];
			}
		}
		printf("%s\n", p);
	}

	getchar();
	getchar();
	getchar();
	return 0;
}