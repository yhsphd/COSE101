/*
0428-2023130887-������-7
�� ���� �Է¹޾� ���� ū ���� ã�� ����ϴ� ���α׷�
*/

#pragma warning(disable:4996)
#include <stdio.h>

int max(int x, int y) {
	return x < y ? y : x;
}

int main() {
	int num1, num2;

	printf("�� ���� ������ �Է��ϼ���: ");
	scanf("%d %d", &num1, &num2);
	printf("�� �� �� ū ���� %d��", max(num1, num2));

	return 0;
}