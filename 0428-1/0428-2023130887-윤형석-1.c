/*
0428-2023130887-������-1
�ֻ��� 4���� 3���� ������ ���� ���
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 4
#define COL 3

int main() {
	int data[ROW][COL];
	int i, j;
	int sum;

	srand(time(NULL));

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			data[i][j] = rand() % 6 + 1;
		}
	}

	printf("data = [\n");
	for (i = 0; i < ROW; i++) {
		printf("[");
		for (j = 0; j < COL; j++) {
			printf("%d", data[i][j]);
			if (j != COL - 1) {
				printf(", ");
			}
		}
		printf("]");
		if (i != ROW - 1) {
			printf(",\n");
		}
	}
	printf("]\n\n");

	sum = 0;
	for (j = 0; j < COL; j++) {
		sum += data[2][j];
	}
	printf("3�� ��: %d\n", sum);

	sum = 0;
	for (i = 0; i < ROW; i++) {
		sum += data[i][1];
	}
	printf("2�� ��: %d\n", sum);

	return 0;
}
