/*
0526-2023130887-������-3
���� ������
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

	printf("��: %s %s\n", pa, pb);

	swap_ptr(&pa, &pb);

	printf("��: %s %s\n", pa, pb);

	return 0;
}