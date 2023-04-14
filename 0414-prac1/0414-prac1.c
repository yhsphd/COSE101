/*
중첩 반복문(nested loop): 반복문 안에 다른 반복문이 포함됨
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