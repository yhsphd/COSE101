/*
0406-2023130887-윤형석
(과제) if 문을 이용하여 근로 소득세를 계산하는 프로그램
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int money, tax;

	printf("과세 금액 입력(단위: 만 원): ");
	scanf("%d", &money);

	if (money <= 1200) {
		tax = money * 100 * 6;	// money * 10000 * 6 / 100
	}
	else if (money <= 4600) {
		tax = money * 100 * 15;
	}
	else if (money <= 8800) {
		tax = money * 100 * 24;
	}
	else if (money <= 15000) {
		tax = money * 100 * 35;
	}
	else if (money <= 30000) {
		tax = money * 100 * 38;
	}
	else if (money <= 50000) {
		tax = money * 100 * 40;
	}
	else {
		tax = money * 100 * 42;
	}

	printf("소득세는 %d원입니다.", tax);
}