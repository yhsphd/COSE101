/*
0414-2023130887-������-6
5���� ������ �Է¹޾Ƽ� �հ�� ��� ����ϱ� (�迭, �ݺ��� �̿�)
*/

#pragma warning(disable: 4996)
#include <stdio.h>

#define SIZE 5

void main() {
	int num[SIZE];
	int i;
	int sum = 0;

	printf("5���� ������ �Է��Ͻÿ�: ");

	for (i = 0; i < SIZE; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < SIZE; i++) {
		sum += num[i];
	}

	printf("���� �հ�: %d��\n", sum);
	printf("���� ���: %.2lf��\n", sum / (double)SIZE);
}