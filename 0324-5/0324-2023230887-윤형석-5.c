/*
0324-2023130887-������-5
�� ��ȯ
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	float num1, num2;
	int num3, num4;

	printf("�� ���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%f %f", &num1, &num2);
	printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
	printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
	printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
	printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);

	printf("\n");

	printf("�� ���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &num3, &num4);
	printf("%d + %d = %d\n", num3, num4, num3 + num4);
	printf("%d - %d = %d\n", num3, num4, num3 - num4);
	printf("%d * %d = %d\n", num3, num4, num3 * num4);
	printf("%d / %d = %.2f\n", num3, num4, (float)num3 / (float)num4);		// �� �ʸ� ����ȯ�ص� �Ǽ� �����
}