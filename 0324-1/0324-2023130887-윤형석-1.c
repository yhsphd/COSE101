/*
0324-2023130887-윤형석-1
달러화 금액 및 환율을 입력 받아 원화로 계산하는 프로그램
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	float usd, ratio;

	printf("달러를 입력하시오 ($): ");
	scanf("%f", &usd);
	printf("환율을 입력하시오 (\\): ");
	scanf("%f", &ratio);

	printf("%.1f 달러는 %.0f 원입니다.", usd, usd * ratio);
}