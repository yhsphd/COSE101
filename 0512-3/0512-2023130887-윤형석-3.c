/*
0512-2023130887-윤형석-3
storage class - extern
다른 파일의 함수, 전역 변수 사용
*/

#include <stdio.h>

int value;

extern void sub();

int main(void) {
	sub();
	printf("%d\n", value);

	return 0;
}