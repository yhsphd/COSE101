/*
비트 연산자 2
*/

#include <stdio.h>

void main() {
	int x = 9;	// 00001001
	int y = 10; // 00001010
	int z = 9;	// 00001001

	printf("AND = %08X\n", x & y);	// 00001000
	printf("OR  = %08X\n", x | y);	// 00001011
	printf("XOR = %08X\n", x ^ y);	// 00000011
	printf("NOT = %08X\n", ~x);		// 11110110
}