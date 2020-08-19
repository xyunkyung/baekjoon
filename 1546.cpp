#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int n;
	double grade[1000];
	double m = 0.0;
	double sum = 0.0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lf", &grade[i]);

		if (m < grade[i])
			m = grade[i];
	}

	for (int i = 0; i < n; i++) {
		grade[i] = grade[i] / m * 100.0;
		sum += grade[i];
	}

	printf("%.2lf\n", (sum / (double)n));

	getchar();
	getchar();
	return 0;
}