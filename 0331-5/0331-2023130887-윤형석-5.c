/*
0331-2023130887-������-5
if ���� ����� ���� ��� ���α׷�
*/

#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	int year;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("%d���� �����Դϴ�.\n", year);
	}
	else {
		printf("%d���� ������ �ƴմϴ�.\n", year);
	}
}