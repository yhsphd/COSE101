/*
0317-2023130887-������-1
�� ���� ����(����)�� �����ϴ� ���α׷�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int x, y;
	float z, w;

	printf("�� ��(����)�� �Է��ϼ���: ");
	scanf("%d %d", &x, &y);

	printf("�� ���� �� (%d + %d) = %d\n", x, y, x + y);
	printf("�� ���� �� (%d - %d) = %d\n", x, y, x - y);
	printf("�� ���� �� (%d * %d) = %d\n", x, y, x * y);

	printf("\n");

	printf("�� ��(�Ǽ�)�� �Է��ϼ���: ");
	scanf("%f %f", &z, &w);

	printf("�� ���� �� (%.2f + %.2f) = %.2f\n", z, w, z + w);
	printf("�� ���� �� (%.2f - %.2f) = %.2f\n", z, w, z - w);
	printf("�� ���� �� (%.2f * %.2f) = %.2f\n", z, w, z * w);
}