/*
0317-2023130887-윤형석-3
진수
*/

#include <stdio.h>

void main() {
	int x = 10;
	int y = 010;
	int z = 0x10;

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n", z);

	printf("\n");

	printf("x = %d(10)\n", x);
	printf("y = %o(8)\n", y);
	printf("z = %x(16)\n", z);	// X: 대문자로 표기, x: 소문자로 표기
}