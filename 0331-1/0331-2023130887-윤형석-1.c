/*
0331-2023130887-������-1
3�ڸ� ���� �Է� �޾� �� �ڸ����� ����ϴ� ���α׷�
*/

#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	int num;

	printf("3�ڸ� �� �Է�: ");
	scanf("%d", &num);

	printf("\n");
	printf("1�� �ڸ�:\t%d\n", num % 10);
	printf("10�� �ڸ�:\t%d\n", num % 100 / 10);
	printf("100�� �ڸ�:\t%d\n", num / 100);
}