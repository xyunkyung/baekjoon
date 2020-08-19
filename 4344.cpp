#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int c;
	int n;

	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		int grade[1000];
		int sum = 0;
		double avg = 0.0;

		scanf("%d", &n);

		for (int i = 0; i < n; i++) {
			scanf("%d", &grade[i]);
			sum += grade[i];
		}
		avg = (double)sum / n;
		int count = 0;

		for (int i = 0; i < n; i++) {
			if (avg < grade[i])
				count++;
		}
		printf("%.3lf%%\n", (double)count * 100 / n);
	}

	getchar();
	getchar();
	return 0;
}