/*
0331-2023130887-������-3
���� ������
*/

#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	int num1, num2;

	printf("��� �Ǵ� ������ �Է��ϼ���: ");
	scanf("%d", &num1);
	printf("����: %d\n", num1 > 0 ? num1 : -num1);

	printf("\n");

	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	printf("ū ��: %d\n", num1 > num2 ? num1 : num2);
	printf("���� ��: %d\n", num1 > num2 ? num2 : num1);
}