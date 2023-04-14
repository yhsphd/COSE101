/*
0413-2023130887-윤형석-3
(과제) 최대 공약수 구하기, do-while문 이용
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int a, b, c;
	printf("두 수 입력: ");
	scanf("%d %d", &a, &b);

	if (a < b) {
		c = a;
		a = b;
		b = c;
	}

	do {
		if (b == 0) break;
		c = a % b;
		a = b;
		b = c;
	} while (b != 0);

	printf("최대공약수: %d", a);
}