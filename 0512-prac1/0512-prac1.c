#include <stdio.h>

int global;

void test(void) {
	printf("���� in test = %d\n", global);
	//printf("���� in test = %d\n", local);
}

int main(void) {
	int local = 1;

	printf("���� in main = %d\n", global);
	printf("���� in main = %d\n", local);

	test();

	return 0;
}