/*
0317-2023130887-������-4
��� �̿�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

/*#define PI 3.141592*/

void main() {
	const float PI = 3.141592;

	float r;

	printf("�������� �Է��ϼ���: ");
	scanf("%f", &r);

	printf("\n�������� %f�� ��,\n\n", r);

	printf("���� ����: %.2f\n", PI * r * r);
	printf("���� �ѷ�: %.2f", PI * r * 2);

	//PI = 3.5;		// ����
}