/*
0428-2023130887-������-8
�� �Ǽ��� �Է¹޾� ��Ģ���� ����� ����ϴ� ���α׷�
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

	printf("�� �Ǽ��� �Է��ϼ���: ");
	scanf("%lf %lf", &num1, &num2);

	pr(num1 + num2);
	pr(num1 - num2);
	pr(num1 * num2);
	pr(num1 / num2);

	return 0;
}