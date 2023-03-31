/*
비트 연산자
*/

#include <stdio.h>

void main() {
	int x1, x2, x3;
	int y1, y2, y3;

	x1 = 6;
	x2 = x1 << 1;
	x3 = x1 << 2;
	printf("x1 = %d\n", x1);
	printf("x2 = %d\n", x2);
	printf("x3 = %d\n", x3);

	y1 = 5;
	y2 = y1 >> 1;
	y3 = y1 >> 2;
	printf("y1 = %d\n", y1);
	printf("y2 = %d\n", y2);
	printf("y3 = %d\n", y3);

	printf("x1 & y1 = %d\n", x1 & y1);
	printf("x1 | y1 = %d\n", x1 | y1);
	printf("x1 ^ y1 = %d\n", x1 ^ y1);
	printf("~x1 = %d\n", ~x1);
}