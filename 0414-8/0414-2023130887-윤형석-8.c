/*
0414-2023130887-윤형석-8
2차원 배열을 선언하고 값을 저장한 후 출력함.
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int score[3][5];
	int i, j;
	int num = 0;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			score[i][j] = num++;
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 5; j++) {
			printf("score[%d][%d] = %d\n", i, j, score[i][j]);
		}
	}
}