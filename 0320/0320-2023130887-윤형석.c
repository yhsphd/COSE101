/*
0320-2023130887-������
(����) ȭ���� �µ��� �Է¹޾� ������ ��ȯ�ϴ� ���α׷�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

#define multiply 5.0/9.0

void main() {
	const float subtract = 32.0;

	float f;

	printf("ȭ�� (��F) �µ��� �Է��ϼ���: ");
	scanf_s("%f", &f);
	printf("[%.1f��F] = [%.1f��C]", f, multiply * (f - subtract));
}