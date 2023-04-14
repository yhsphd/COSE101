/*
0414-2023130887-윤형석-1
중첩 for문을 이용하여 구구단(2-9단)을 출력한느 프로그램
*/

#include <stdio.h>

void main() {
	int i, j, k;

	for (i = 1; i <= 4; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%d x %d = %d\t", 2 * i, j, 2 * i * j);
			printf("%d x %d = %d\n", 2 * i + 1, j, (2 * i + 1) * j);
		}
		printf("\n");
	}
}