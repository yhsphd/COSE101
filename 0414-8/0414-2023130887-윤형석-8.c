/*
0414-2023130887-������-8
2���� �迭�� �����ϰ� ���� ������ �� �����.
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