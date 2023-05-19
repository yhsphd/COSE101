// 변수의 주소

#include <stdio.h>

int main(void) {
	int num;

	printf("%d\n", &num);		// 10진수
	printf("%p\n", &num);		// 16진수

	return 0;
}