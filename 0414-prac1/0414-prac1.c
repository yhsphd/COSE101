/*
��ø �ݺ���(nested loop): �ݺ��� �ȿ� �ٸ� �ݺ����� ���Ե�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int i, j;
	for (i = 0; i < 4; i++) {
		printf("O");
		for (j = 0; j < 5; j++) {
			printf("X");
		}
		printf("\n");
	}
}