/*
0407-2023130887-������-8
���ٿ� ����
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	const ans = 78;
	int num;
	int i = 1;

	printf("********** ���� ������ ���� **********\n");

	do {
		printf("\n������ ���纸����!: ");
		scanf("%d", &num);

		if (ans == num) {
			printf("\n�����մϴ�!\n�õ�Ƚ��: %d", i);
		}
		else if (ans < num) {
			printf("���� Ů�ϴ�.");
		}
		else if (ans > num) {
			printf("���� �۽��ϴ�.");
		}
		i++;
	} while (ans != num);
}