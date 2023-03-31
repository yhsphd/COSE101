/*
0331-2023130887-윤형석-5
if 문을 사용한 윤년 계산 프로그램
*/

#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	int year;

	printf("연도를 입력하세요: ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("%d년은 윤년입니다.\n", year);
	}
	else {
		printf("%d년은 윤년이 아닙니다.\n", year);
	}
}