/*
0512-2023130887-������-1
�� �Ǽ��� �Է¹޾� ��Ģ���� ����� ����ϴ� ���α׷�
��Ģ���� ����� ���� 4�� �Լ� ȣ��
*/

#pragma warning(disable:4996)
#include <stdio.h>

void pr(double num) {
	printf("------------\n");
	printf("��� = %.2lf\n", num);
	printf("------------\n");
}

int main() {
	double num1, num2;

	printf("��Ģ������ �� �� �Ǽ� �Է�: ");
	scanf("%lf %lf", &num1, &num2);

	pr(num1 + num2);
	pr(num1 - num2);
	pr(num1 * num2);
	pr(num1 / num2);

	return 0;
}