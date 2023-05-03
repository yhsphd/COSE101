/*
0428-2023130887-윤형석-7
두 수를 입력받아 그중 큰 수를 찾아 출력하는 프로그램
*/

#pragma warning(disable:4996)
#include <stdio.h>

int max(int x, int y) {
	return x < y ? y : x;
}

int main() {
	int num1, num2;

	printf("두 개의 정수를 입력하세요: ");
	scanf("%d %d", &num1, &num2);
	printf("두 수 중 큰 수는 %d임", max(num1, num2));

	return 0;
}