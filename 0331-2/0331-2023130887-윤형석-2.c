/*
0331-2023130887-������-2
���̰� 30�� �����̰� ���������� 700�� �̻��� ��� 1�� ����ϴ� ���α׷�
*/

#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	int age, score;

	printf("���� �Է�: ");
	scanf("%d", &age);
	printf("���� ���� �Է�: ");
	scanf("%d", &score);

	printf("\n");
	printf("���: %d", age <= 30 && score >= 700);
}