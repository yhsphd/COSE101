/*
0310-2023130887-윤형석-2
두 개의 숫자(실수)를 연산하는 프로그램
*/

#include <stdio.h>

int main(void) {
	double x = 10.5;
	double y = 20.5;

	printf("두 수의 합 (%.1lf + %.1lf) = %.1lf\n", x, y, x + y);
	printf("두 수의 차 (%.1lf - %.1lf) = %.1lf\n", x, y, x - y);
	printf("두 수의 곱 (%.1lf * %.1lf) = %.1lf\n", x, y, x * y);

	printf("\n");

	printf("두 수의 합 (%lf + %lf) = %lf\n", x, y, x + y);		// double을 %f로 출력해도 됨
	printf("두 수의 차 (%lf - %lf) = %lf\n", x, y, x - y);
	printf("두 수의 곱 (%lf * %lf) = %lf\n", x, y, x * y);

	return 0;
}