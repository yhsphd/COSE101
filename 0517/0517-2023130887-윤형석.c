/*
0517-2023130887-������
(����) �ִ� ����� ����ϱ�, ��� �Լ��� �̿��� ��
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int gcd(int x, int y)
{
	int z = x % y;
	printf("gcd(%d, %d)\n", x, y);
	if (z == 0) {
		return y;
	}
	return gcd(y, z);
}

int main() {
	int a, b;
	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d", &a, &b);
	printf("�ִ�����: %d", gcd(a, b));
	return 0;
}