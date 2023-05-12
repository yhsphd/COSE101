/*
0512-2023130887-À±Çü¼®-2
storage class - static
*/

#include <stdio.h>

void sub(void) {
	int count1 = 0;
	static int count2;

	count1++;
	count2++;

	printf("count1 = %d, count2 = %d\n", count1, count2);
}

int main(void) {
	int i;
	for (i = 0; i < 3; i++) {
		sub();
	}
	return 0;
}