/*
0331-2023130887-윤형석-4
if 문
*/

#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	int num;
	int absolute = 0;

	printf("정수를 입력하세요: ");
	scanf("%d", &num);

	if (num > 0) {
		absolute = num;
	}
	else {
		absolute = -num;
	}

	printf("절댓값은 %d ", absolute);

	if (num > 0) {
		if (num % 2 == 0) {
			printf("이고, 짝수입니다.");
		}
		else {
			printf("이고, 홀수입니다.");
		}
	}
	else {
		printf("입니다.");
	}
}