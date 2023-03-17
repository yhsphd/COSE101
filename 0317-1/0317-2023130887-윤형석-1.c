/*
0317-2023130887-윤형석-1
두 개의 숫자(정수)를 연산하는 프로그램
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int x, y;
	float z, w;

	printf("두 수(정수)를 입력하세요: ");
	scanf("%d %d", &x, &y);

	printf("두 수의 합 (%d + %d) = %d\n", x, y, x + y);
	printf("두 수의 차 (%d - %d) = %d\n", x, y, x - y);
	printf("두 수의 곱 (%d * %d) = %d\n", x, y, x * y);

	printf("\n");

	printf("두 수(실수)를 입력하세요: ");
	scanf("%f %f", &z, &w);

	printf("두 수의 합 (%.2f + %.2f) = %.2f\n", z, w, z + w);
	printf("두 수의 차 (%.2f - %.2f) = %.2f\n", z, w, z - w);
	printf("두 수의 곱 (%.2f * %.2f) = %.2f\n", z, w, z * w);
}