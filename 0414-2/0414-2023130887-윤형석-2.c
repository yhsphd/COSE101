/*
0414-2023130887-������-2
���� �Է� �� �Է��� ������ ����� ����� - for��
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int i = 0, num = 0, sum = 0;
	double avg;

	for (;;) {
		printf("�л� ������ �Է��ϼ���: ");
		scanf("%d", &num);

		if (num < 0) {
			break;
		}

		i++;
		sum += num;
	}

	printf("�л����� ������ ����� %.2f�Դϴ�.", sum / (double)i);
}