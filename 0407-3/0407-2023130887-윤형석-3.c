/*
0407-2023130887-������-3
1-10�� ����� �Է¹޾�
3 ������ ��� '��', 8 �̻��� ��� '��', �������� '��'�� �����
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int num;

	while (1) {
		printf("���� �Է�: ");
		scanf("%d", &num);

		printf("\n");

		if (num > 10 || num < 1) {
			printf("�ٽ� �Է��ϼ���.\n");
			continue;
		}

		switch (num) {
		case 1:
		case 2:
		case 3:
			printf("��");
			break;
		case 8:
		case 9:
		case 10:
			printf("��");
			break;
		default:
			printf("��");
			break;
		}
		break;
	}
}