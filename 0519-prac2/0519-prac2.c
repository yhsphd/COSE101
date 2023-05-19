#include <stdio.h>

int main(void) {
	int num1;
	//double* num2;	//자료형 불일치
	double* num2;

	num1 = 10;
	num2 = &num1;

	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
	printf("\n");
	printf("&num1 = %d\n", &num1);
	printf("*num2 = %d\n", *num2);

	printf("\n");
	*num2 = 100;

	printf("num1 = %d\n", num1);
	printf("*num2 = %d\n", *num2);

	printf("\n");

	printf("sizeof(num1) = %d\n", sizeof(num1));
	printf("sizeof(num2) = %d\n", sizeof(num2));

	return 0;
}