#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int* num;

	printf("¼ö ÀÔ·Â: ");
	scanf("%d", &num);

	printf("&num = %d\n", &num);
	printf("num = %d\n", num);
	printf("*num = %d\n", *num);

	return 0;
}