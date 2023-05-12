#include <stdio.h>

int global;

void test(void) {
	printf("전역 in test = %d\n", global);
	//printf("지역 in test = %d\n", local);
}

int main(void) {
	int local = 1;

	printf("전역 in main = %d\n", global);
	printf("지역 in main = %d\n", local);

	test();

	return 0;
}