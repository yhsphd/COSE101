/*
0526-2023130887-������-1
2���� �迭 �ε��� vs ������
*/

#include <stdio.h>

int main() {
	int ary[2][2] = { {1, 2}, {3, 4} };
	int i, j;

	// 2���� �迭 �ε���
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d", ary[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	// ������
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("%d", *(*(ary + i) + j));
		}
		printf("\n");
	}

	return 0;
}
