/*
0324-2023130887-������-4
������ �����ڸ� �̿��� ���α׷�
*/

#pragma warning(disable: 4996)
#include <stdio.h>
#define SEC_PER_MINUTE 60

void main() {
	int seconds;

	printf("�� �Է�: ");
	scanf("%d", &seconds);

	printf("%d�� = %d�� %d��", seconds, seconds / SEC_PER_MINUTE, seconds % SEC_PER_MINUTE);
}