/*
0406-2023130887-������
(����) if ���� �̿��Ͽ� �ٷ� �ҵ漼�� ����ϴ� ���α׷�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int money, tax;

	printf("���� �ݾ� �Է�(����: �� ��): ");
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

	printf("�ҵ漼�� %d���Դϴ�.", tax);
}