#include <stdio.h>

int global;

void test(void) {
	printf("傈开 in test = %d\n", global);
	//printf("瘤开 in test = %d\n", local);
}

int main(void) {
	int local = 1;

	printf("傈开 in main = %d\n", global);
	printf("瘤开 in main = %d\n", local);

	test();

	return 0;
}