/*
0331-2023130887-윤형석-1
3자리 수를 입력 받아 각 자릿수를 출력하는 프로그램
*/

#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	int num;

	printf("3자리 수 입력: ");
	scanf("%d", &num);

	printf("\n");
	printf("1의 자리:\t%d\n", num % 10);
	printf("10의 자리:\t%d\n", num % 100 / 10);
	printf("100의 자리:\t%d\n", num / 100);
}