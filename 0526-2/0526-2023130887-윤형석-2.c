/*
0526-2023130887-������-2
2���� �迭�� �μ��� ���
*/

#include <stdio.h>

void ary_prn(int (*ary2prn)[4]);

int main() {
	int ary[3][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12} };

	ary_prn(ary);

	return 0;
}

void ary_prn(int (*ary2prn)[4]) {
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%4d", *(*(ary2prn + i) + j));
		}
		printf("\n");
	}
}