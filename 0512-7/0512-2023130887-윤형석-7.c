/*
0512-2023130887-윤형석-7
재귀호출을 이용한 계승(팩토리얼) 구하기
*/

#pragma warning(disable:4996)
#include <stdio.h>

int factorial(int num) {
	if (num == 1) {
		return num;
	}
	else if (num >= 2) {
		return num * factorial(num - 1);
	}
}

int main() {
	int num;

	printf("계승을 구할 정수값: ");
	scanf("%d", &num);

	printf("%d! = %d", num, factorial(num));

	return 0;
}