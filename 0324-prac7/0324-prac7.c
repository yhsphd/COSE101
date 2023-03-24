// 증감 연산자

#include <stdio.h>

void main() {
	int a, b, c, d, result;

	a = 1;
	result = ++a;
	printf("result = %d, a = %d\n", result, a);

	b = 2;
	result = b++;
	printf("result = %d, b = %d\n", result, b);

	c = 3;
	result = --c;
	printf("result = %d, c = %d\n", result, c);

	d = 4;
	result = d++;
	printf("result = %d, d = %d\n", result, d);
}