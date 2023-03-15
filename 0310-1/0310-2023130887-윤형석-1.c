/*
0310-2023130887-윤형석-1
두 개의 숫자(정수)를 연산하는 프로그램
*/

#include <stdio.h>

int main(void) {
	/*int x;
	int y;
	x = 100;
	y = 200;*/

	int x = 100;	// 변수 생성과 동시에 초기화
	int y = 200;

	printf("두 수의 합 (%d + %d) = %d\n", x, y, x + y);
	printf("두 수의 차 (%d - %d) = %d\n", x, y, x - y);
	printf("두 수의 곱 (%d * %d) = %d\n", x, y, x * y);

	return 0;
}