/*
0331-2023130887-윤형석-3
조건 연산자
*/

#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	int num1, num2;

	printf("양수 또는 음수를 입력하세요: ");
	scanf("%d", &num1);
	printf("절댓값: %d\n", num1 > 0 ? num1 : -num1);

	printf("\n");

	printf("두 수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	printf("큰 수: %d\n", num1 > num2 ? num1 : num2);
	printf("작은 수: %d\n", num1 > num2 ? num2 : num1);
}