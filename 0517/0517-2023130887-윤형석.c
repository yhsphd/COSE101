/*
0517-2023130887-윤형석
(과제) 최대 공약수 계산하기, 재귀 함수를 이용할 것
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int gcd(int x, int y)
{
	int z = x % y;
	printf("gcd(%d, %d)\n", x, y);
	if (z == 0) {
		return y;
	}
	return gcd(y, z);
}

int main() {
	int a, b;
	printf("두 수를 입력하세요: ");
	scanf("%d %d", &a, &b);
	printf("최대공약수: %d", gcd(a, b));
	return 0;
}