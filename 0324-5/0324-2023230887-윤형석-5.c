/*
0324-2023130887-윤형석-5
형 변환
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	float num1, num2;
	int num3, num4;

	printf("두 개의 실수를 입력하시오: ");
	scanf("%f %f", &num1, &num2);
	printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
	printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
	printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
	printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);

	printf("\n");

	printf("두 개의 정수를 입력하시오: ");
	scanf("%d %d", &num3, &num4);
	printf("%d + %d = %d\n", num3, num4, num3 + num4);
	printf("%d - %d = %d\n", num3, num4, num3 - num4);
	printf("%d * %d = %d\n", num3, num4, num3 * num4);
	printf("%d / %d = %.2f\n", num3, num4, (float)num3 / (float)num4);		// 한 쪽만 형변환해도 실수 연산됨
}