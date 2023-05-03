#include <stdio.h>

int main() {
	int num;
	int count = 0;

	for (num = 1; num <= 30; num++) {
		if (num / 10 == 2 || num / 10 == 4 || num % 10 == 2 || num % 10 == 4) {
			count++;
			printf("%d ", num);
		}
	}
	printf("\n");
	printf("%d°³", count);

	return 0;
}
