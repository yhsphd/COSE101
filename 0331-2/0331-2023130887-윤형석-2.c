/*
0331-2023130887-윤형석-2
나이가 30세 이하이고 토익점수가 700점 이상인 경우 1을 출력하는 프로그램
*/

#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	int age, score;

	printf("나이 입력: ");
	scanf("%d", &age);
	printf("토익 점수 입력: ");
	scanf("%d", &score);

	printf("\n");
	printf("결과: %d", age <= 30 && score >= 700);
}