/*
0526-2023130887-윤형석-1
2차원 배열 인덱스 vs 포인터
*/

#include <stdio.h>

int main() {
	int ary[2][2] = { {1, 2}, {3, 4} };
	int i, j;

	// 2차원 배열 인덱스
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d", ary[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	// 포인터
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d", *(*(ary + i) + j));
		}
		printf("\n");
	}

	return 0;
}
