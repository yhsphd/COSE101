/*
0331-2023130887-������-4
if ��
*/

#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	int num;
	int absolute = 0;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &num);

	if (num > 0) {
		absolute = num;
	}
	else {
		absolute = -num;
	}

	printf("������ %d ", absolute);

	if (num > 0) {
		if (num % 2 == 0) {
			printf("�̰�, ¦���Դϴ�.");
		}
		else {
			printf("�̰�, Ȧ���Դϴ�.");
		}
	}
	else {
		printf("�Դϴ�.");
	}
}