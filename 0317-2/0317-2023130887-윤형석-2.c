/*
0317-2023130887-윤형석-2
원의 반지름을 입력 받아 면적을 계산하는 프로그램
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	float r;

	printf("반지름을 입력하세요: ");
	scanf("%f", &r);

	printf("원의 면적: %.2f", 3.14 * r * r);
}