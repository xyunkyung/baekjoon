#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int grade;
	int sum = 0;

	for (int i = 0; i < 5;i++) {
		scanf("%d", &grade);

		if (grade >= 40)
			grade = grade;
		else
			grade = 40;

		sum += grade;
	}

	printf("%d", sum / 5);

	getchar();
	getchar();
	return 0;
}