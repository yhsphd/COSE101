/*
���̺귯�� �Լ� - stdlib.h, rand()
*/

#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(NULL));
	int i;

	for (i = 0; i < 9; i++) {
		printf("%d\n", rand());
	}
}