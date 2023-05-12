/*
0503-2023130887-������
(����) ���� ���� ���α׷�, �ܾ� ��� �κ��� �Լ��� �ۼ���, �ݺ��ؼ� ����
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
	printf("1.�Ա�\t2.���\t3.�ܰ�\t4.����\n");
	printLine();
	scanf("%d", &sel);

	return sel;
}

int calcBalance(bal, del) {
	return bal += del;
}

void printBalance(bal) {
	printf("�ܾ�: %d��\n", bal);
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
			printf("�ݾ�: ");
			scanf("%d", &num);
			printf("\033[F%d�� �Ա�!\n", num);
			balance = calcBalance(balance, num);
			break;
		case 2:
			printf("�ݾ�: ");
			scanf("%d", &num);
			printf("\033[F%d�� ���!\n", num);
			balance = calcBalance(balance, -num);
			break;
		case 3:
			break;
		case 4:
			goto end;
		default:
			printf("�ٽ� �Է��ϼ���.\n");
			continue;
		}
		printBalance(balance);
	}

end:
	printf("���α׷� ����");

	return 0;
}