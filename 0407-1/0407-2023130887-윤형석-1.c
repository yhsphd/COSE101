/*
0407-2023130887-������-1
�� ���� �Է¹޾� ���, ������ ������
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int num1, num2;

	printf("ù ��° ��: ");
	scanf("%d", &num1);
	printf("�� ��° ��: ");
	scanf("%d", &num2);

	printf("\n");

	if (num1 > 0 && num2 > 0) {
		printf("�� �� ��� ���");
	}
	else if (num1 < 0 && num2 < 0) {
		printf("�� �� ��� ����");
	}
	else if (num1 * num2 < 0) {
		printf("�� �� �� �ϳ��� ���");
	}
	else {
		printf("�� �� �� 0�� ����");
	}
}