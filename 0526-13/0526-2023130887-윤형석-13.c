/*
0526-2023130887-윤형석-13
atoi(), atof()
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

int main() {
	char s1[] = "200";
	char s2[] = "14.87";

	int num1;
	double num2, result;

	num1 = atoi(s1);
	num2 = atof(s2);

	printf("num1 = %d\n", num1);
	printf("num2 = %.2lf\n", num2);

	result = num1 + num2;

	printf("연산 결과 : %.2lf", result);

	return 0;
}