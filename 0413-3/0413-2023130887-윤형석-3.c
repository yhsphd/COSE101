/*
0413-2023130887-������-3
(����) �ִ� ����� ���ϱ�, do-while�� �̿�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int a, b, c;
	printf("�� �� �Է�: ");
	scanf("%d %d", &a, &b);

	if (a < b) {
		c = a;
		a = b;
		b = c;
	}

	do {
		if (b == 0) break;
		c = a % b;
		a = b;
		b = c;
	} while (b != 0);

	printf("�ִ�����: %d", a);
}