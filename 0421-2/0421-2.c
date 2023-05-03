#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i, j;

	srand(time(NULL));

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", rand() % 30 + 1);
		}
		printf("\n");
	}

	return 0;
}
