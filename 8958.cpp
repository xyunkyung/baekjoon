#include <stdio.h>
#include <string.h>
#pragma warning (disable:4996)

int main() {
	int n;
	int score, sum;
	char test[80];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &test);

		score = 0;
		sum = 0;

		for (int j = 0; j < strlen(test); j++) {
			if (test[j] == 'O')
				score++;
			else
				score = 0;
			sum += score;
		}
	
		printf("%d\n", sum);
	}

	getchar();
	getchar();
	return 0;
}