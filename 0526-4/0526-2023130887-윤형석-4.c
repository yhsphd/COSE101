/*
0526-2023130887-윤형석-4
함수 포인터
*/

#pragma warning(disable:4996)
#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int (*pf1)(int, int);
int (*pf2[2])(int, int) = { add, sub };

int main() {
	int num1, num2;

	printf("두 수 입력: ");
	scanf("%d %d", &num1, &num2);

	// 1번째 방법
	pf1 = add;
	printf("result = %d (pf1 = add)\n", pf1(num1, num2));
	pf1 = sub;
	printf("result = %d (pf1 = sub)\n", pf1(num1, num2));

	// 2번째 방법
	printf("result = %d (pf2[0] = add)\n", pf2[0](num1, num2));
	printf("result = %d (pf2[1] = sub)\n", pf2[1](num1, num2));

	return 0;
}