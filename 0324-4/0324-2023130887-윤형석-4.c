/*
0324-2023130887-윤형석-4
나머지 연산자를 이용한 프로그램
*/

#pragma warning(disable: 4996)
#include <stdio.h>
#define SEC_PER_MINUTE 60

void main() {
	int seconds;

	printf("초 입력: ");
	scanf("%d", &seconds);

	printf("%d초 = %d분 %d초", seconds, seconds / SEC_PER_MINUTE, seconds % SEC_PER_MINUTE);
}