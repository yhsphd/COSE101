/*
0414-2023130887-윤형석-6
5명의 점수를 입력받아서 합계와 평균 계산하기 (배열, 반복문 이용)
*/

#pragma warning(disable: 4996)
#include <stdio.h>

#define SIZE 5

void main() {
	int num[SIZE];
	int i;
	int sum = 0;

	printf("5명의 점수를 입력하시오: ");

	for (i = 0; i < SIZE; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < SIZE; i++) {
		sum += num[i];
	}

	printf("성적 합계: %d점\n", sum);
	printf("성적 평균: %.2lf점\n", sum / (double)SIZE);
}