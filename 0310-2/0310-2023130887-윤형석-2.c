/*
0310-2023130887-������-2
�� ���� ����(�Ǽ�)�� �����ϴ� ���α׷�
*/

#include <stdio.h>

int main(void) {
	double x = 10.5;
	double y = 20.5;

	printf("�� ���� �� (%.1lf + %.1lf) = %.1lf\n", x, y, x + y);
	printf("�� ���� �� (%.1lf - %.1lf) = %.1lf\n", x, y, x - y);
	printf("�� ���� �� (%.1lf * %.1lf) = %.1lf\n", x, y, x * y);

	printf("\n");

	printf("�� ���� �� (%lf + %lf) = %lf\n", x, y, x + y);		// double�� %f�� ����ص� ��
	printf("�� ���� �� (%lf - %lf) = %lf\n", x, y, x - y);
	printf("�� ���� �� (%lf * %lf) = %lf\n", x, y, x * y);

	return 0;
}