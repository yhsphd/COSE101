/*
0328-2023130887-������
(����) �ڵ� �Ǹű⸦ �ùķ��̼��ϴ� ���α׷�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int money, price;
	int diff;
	int coin100, coin50, coin10;

	printf("������ �� (��): ");
	scanf("%d", &money);
	printf("���� �� (��): ");
	scanf("%d", &price);

	printf("\n");

	diff = money - price;
	printf("�Ž�����:\t%d��\n", diff);
	coin100 = diff / 100;
	printf("100�� ����:\t%d��\n", coin100);
	diff -= 100 * coin100;
	coin50 = diff / 50;
	printf("50�� ����:\t%d��\n", coin50);
	diff -= 50 * coin50;
	coin10 = diff / 10;
	printf("10�� ����:\t%d��\n", coin10);
	diff -= 10 * coin10;

	if (diff) {
		printf("\n%d���� ���ǱⰡ �Ծ����ϴ�~", diff);
	}
}