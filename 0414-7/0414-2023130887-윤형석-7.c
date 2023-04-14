/*
0414-2023130887-윤형석-7
5개의 숫자를 입력받아 배열로 저장한 후 최솟값 출력하기
*/

#pragma warning(disable: 4996)
#include <stdio.h>

#define SIZE 5

void main() {
	int num[SIZE];
	int i;
	int min;

	printf("5개의 숫자를 입력하시오: ");

	for (i = 0; i < SIZE; i++) {
		scanf("%d", &num[i]);
	}

	min = num[0];
	for (i = 1; i < SIZE; i++) {
		if (num[i] < min) min = num[i];
	}

	printf("최솟값: %d", min);
}