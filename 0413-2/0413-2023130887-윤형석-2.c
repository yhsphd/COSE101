/*
0413-2023130887-������-1
(����) �ִ� ����� ���ϱ�, for�� �̿�
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

	for (; b != 0;) {
		c = a % b;
		a = b;
		b = c;
	}

	printf("�ִ�����: %d", a);
}