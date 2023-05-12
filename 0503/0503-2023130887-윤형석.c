/*
0503-2023130887-윤형석
(과제) 은행 계좌 프로그램, 잔액 계산 부분은 함수로 작성함, 반복해서 실행
*/

#pragma warning(disable: 4996)
#include <stdio.h>
#include <Windows.h>

#define width 30

void printLine() {
	int i;
	for (i = 0; i < width; i++) {
		printf("=");
	}
	printf("\n");
}

int getSelection() {
	int sel;

	printLine();
	printf("1.입금\t2.출금\t3.잔고\t4.종료\n");
	printLine();
	scanf("%d", &sel);

	return sel;
}

int calcBalance(bal, del) {
	return bal += del;
}

void printBalance(bal) {
	printf("잔액: %d원\n", bal);
}

int main() {
	int balance;
	int sel;
	int num;

	balance = 0;

	for (;;) {
		num = 0;
		sel = getSelection();

		switch (sel) {
		case 1:
			printf("금액: ");
			scanf("%d", &num);
			printf("\033[F%d원 입금!\n", num);
			balance = calcBalance(balance, num);
			break;
		case 2:
			printf("금액: ");
			scanf("%d", &num);
			printf("\033[F%d원 출금!\n", num);
			balance = calcBalance(balance, -num);
			break;
		case 3:
			break;
		case 4:
			goto end;
		default:
			printf("다시 입력하세요.\n");
			continue;
		}
		printBalance(balance);
	}

end:
	printf("프로그램 종료");

	return 0;
}