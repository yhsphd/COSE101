/*
0526-2023130887-윤형석-3
다중 포인터
*/

#include <stdio.h>

void swap_ptr(char **ppa, char **ppb) {
	char *temp = *ppa;
	*ppa = *ppb;
	*ppb = temp;
}

int main() {
	char* pa;
	char* pb;
	char ar1[] = "success";
	char ar2[] = "failure";

	pa = ar1;
	pb = ar2;

	printf("전: %s %s\n", pa, pb);

	swap_ptr(&pa, &pb);

	printf("후: %s %s\n", pa, pb);

	return 0;
}