/*
0407-2023130887-윤형석-5
while 문을 이용한 구구단 출력 프로그램
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int num;
	int i = 1;

	printf("출력하고 싶은 단은? ");
	scanf("%d", &num);

	printf("\n");

	while (i <= 9) {
		printf("%d * %d = %d\n", num, i, num * i);
		i++;
	}
}