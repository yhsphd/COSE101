/*
0414-2023130887-������-7
5���� ���ڸ� �Է¹޾� �迭�� ������ �� �ּڰ� ����ϱ�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

#define SIZE 5

void main() {
	int num[SIZE];
	int i;
	int min;

	printf("5���� ���ڸ� �Է��Ͻÿ�: ");

	for (i = 0; i < SIZE; i++) {
		scanf("%d", &num[i]);
	}

	min = num[0];
	for (i = 1; i < SIZE; i++) {
		if (num[i] < min) min = num[i];
	}

	printf("�ּڰ�: %d", min);
}