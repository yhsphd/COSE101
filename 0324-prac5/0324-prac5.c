// 실수형 범위

#include <stdio.h>

void main() {
	float x = 1e39;			// overflow
	float y = 1.23456e-46;	// underflow
	float z = 1.5;
	float w = 1.5e2;

	printf("x = %f\n", x);
	printf("y = %f\n", y);
	printf("z = %f\n", z);
	printf("w = %f\n", w);

	printf("\n");

	printf("x = %e\n", x);
	printf("y = %e\n", y);
	printf("z = %e\n", z);
	printf("w = %e\n", w);
}