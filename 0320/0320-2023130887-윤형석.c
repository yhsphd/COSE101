/*
0320-2023130887-윤형석
(과제) 화씨로 온도를 입력받아 섭씨로 변환하는 프로그램
*/

#pragma warning(disable: 4996)
#include <stdio.h>

#define multiply 5.0/9.0

void main() {
	const float subtract = 32.0;

	float f;

	printf("화씨 (°F) 온도를 입력하세요: ");
	scanf_s("%f", &f);
	printf("[%.1f°F] = [%.1f°C]", f, multiply * (f - subtract));
}