/*
0324-2023130887-������-1
�޷�ȭ �ݾ� �� ȯ���� �Է� �޾� ��ȭ�� ����ϴ� ���α׷�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	float usd, ratio;

	printf("�޷��� �Է��Ͻÿ� ($): ");
	scanf("%f", &usd);
	printf("ȯ���� �Է��Ͻÿ� (\\): ");
	scanf("%f", &ratio);

	printf("%.1f �޷��� %.0f ���Դϴ�.", usd, usd * ratio);
}