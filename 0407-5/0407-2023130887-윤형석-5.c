/*
0407-2023130887-������-5
while ���� �̿��� ������ ��� ���α׷�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int num;
	int i = 1;

	printf("����ϰ� ���� ����? ");
	scanf("%d", &num);

	printf("\n");

	while (i <= 9) {
		printf("%d * %d = %d\n", num, i, num * i);
		i++;
	}
}