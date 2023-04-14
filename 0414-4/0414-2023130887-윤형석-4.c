/*
0414-2023130887-윤형석-4
입력한 수의 제곱근 구하기
음수 입력 시 break를 이용하여 무한루프를 탈출하기 (while문)
*/

#pragma warning(disable: 4996)
#include <stdio.h>
#include <math.h>

void main() {
	double num;

	while (1) {
		printf("실숫값(양수)를 입력하시오: ");
		scanf("%lf", &num);

		if (num < 0) break;

		printf("%.2lf의 제곱근은 %.2lf입니다.\n\n", num, sqrt(num));
	}
}