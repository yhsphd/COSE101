/*
for문 및 배열을 이용하여 5명의 점수를 입력받아 배열에 저장하고 출력하기
*/

#pragma warning(disable: 4996)
#include <stdio.h>

#define SIZE 5

void main() {
	int num[SIZE];
	int i;

	printf("5명의 점수를 입력하시오: ");

	for (i = 0; i < SIZE; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < SIZE; i++) {
		printf("num[%d] = %d\n", i, num[i]);
	}
}