/*
0317-2023130887-윤형석-4
상수 이용
*/

#pragma warning(disable: 4996)
#include <stdio.h>

/*#define PI 3.141592*/

void main() {
	const float PI = 3.141592;

	float r;

	printf("반지름을 입력하세요: ");
	scanf("%f", &r);

	printf("\n반지름이 %f일 때,\n\n", r);

	printf("원의 면적: %.2f\n", PI * r * r);
	printf("원의 둘레: %.2f", PI * r * 2);

	//PI = 3.5;		// 오류
}