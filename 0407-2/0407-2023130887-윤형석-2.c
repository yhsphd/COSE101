/*
0407-2023130887-������-2
�Է��� ���ڿ� ���� ����� ����ϴ� ���α׷� (a, b, c, ��Ÿ)
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	char chr;

	printf("����(a-c)�� �Է��Ͻÿ�: ");
	scanf("%c", &chr);

	switch (chr) {
	case 'a':
		printf("'����'�Դϴ�.");
		break;
	case 'b':
		printf("'��'�Դϴ�.");
		break;
	case'c':
		printf("'��'�Դϴ�.");
		break;
	default:
		printf("��Ÿ �Դϴ�.");
		break;
	}
}