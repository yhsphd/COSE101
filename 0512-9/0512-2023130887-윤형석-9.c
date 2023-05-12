/*
0512-2023130887-윤형석-9
재귀호출을 이용한 피보나치 수열
*/

#pragma warning(disable:4996)
#include <stdio.h>

int Fibonacci(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	else {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}

int main() {
	int max, i;

	printf("피보나치 수열 n개 구하기\nn=");
	scanf("%d", &max);

	printf("\n");

	for (i = 0; i < max; i++) {
		printf("%d\n", Fibonacci(i));
	}

	return 0;
}