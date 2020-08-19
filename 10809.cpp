#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	char s[100] = {NULL};
	int cnt[26] = { 0, };
	
	scanf("%s", s);

	for (int i = 'a'; i <= 'z'; i++) {
		for (int j = 0; j < 100; j++) {
			if (s[j] == i) {
				cnt[i - 97] = j + 1;
				break;
			}
		}
	}
	
	for (int i = 0; i < 26; i++) {
		printf("%d ", cnt[i] - 1);
	}

	printf("\n");

	getchar();
	getchar();
	getchar();
	return 0;
}