/*
0414-2023130887-������-4
�Է��� ���� ������ ���ϱ�
���� �Է� �� break�� �̿��Ͽ� ���ѷ����� Ż���ϱ� (while��)
*/

#pragma warning(disable: 4996)
#include <stdio.h>
#include <math.h>

void main() {
	double num;

	while (1) {
		printf("�Ǽ���(���)�� �Է��Ͻÿ�: ");
		scanf("%lf", &num);

		if (num < 0) break;

		printf("%.2lf�� �������� %.2lf�Դϴ�.\n\n", num, sqrt(num));
	}
}