#include <stdio.h>
#pragma warning (disable:4996)

int main() {
	int menu[5];
	int temp;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &menu[i]);
	}

	for (int i = 0;i < 2;i++) {
		for (int j = 0; j < 2; j++) {
			if (menu[j] > menu[j + 1]) {
				temp = menu[j];
				menu[j] = menu[j + 1];
				menu[j + 1] = temp;
			}
		}
	}

	printf("%d\n", (menu[3] > menu[4] ? menu[0] + menu[4] - 50 : menu[0] + menu[3] - 50));

	getchar();
	getchar();
	return 0;
}