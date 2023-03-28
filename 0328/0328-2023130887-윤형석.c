/*
0328-2023130887-윤형석
(과제) 자동 판매기를 시뮬레이션하는 프로그램
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int money, price;
	int diff;
	int coin100, coin50, coin10;

	printf("투입한 돈 (원): ");
	scanf("%d", &money);
	printf("물건 값 (원): ");
	scanf("%d", &price);

	printf("\n");

	diff = money - price;
	printf("거스름돈:\t%d원\n", diff);
	coin100 = diff / 100;
	printf("100원 동전:\t%d개\n", coin100);
	diff -= 100 * coin100;
	coin50 = diff / 50;
	printf("50원 동전:\t%d개\n", coin50);
	diff -= 50 * coin50;
	coin10 = diff / 10;
	printf("10원 동전:\t%d개\n", coin10);
	diff -= 10 * coin10;

	if (diff) {
		printf("\n%d원은 자판기가 먹었습니다~", diff);
	}
}