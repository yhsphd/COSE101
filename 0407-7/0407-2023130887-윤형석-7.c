/*
0407-2023130887-������-7
do...while���� �̿��� �޴� ���� ���α׷�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int sel;

	do {
		printf("1: ���� �����\n");
		printf("2: ���� ����\n");
		printf("����: ");
		scanf("%d", &sel);

		printf("\n");

		if (sel > 2 || sel <= 0) {
			printf("�ٽ� �Է��ϼ���.\n");
		}
		else {
			printf("���õ� ���: %d", sel);
		}

		printf("\n");
	} while (sel > 2 || sel <= 0);
}