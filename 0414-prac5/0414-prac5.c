/*
for�� �� �迭�� �̿��Ͽ� 5���� ������ �Է¹޾� �迭�� �����ϰ� ����ϱ�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

#define SIZE 5

void main() {
	int num[SIZE];
	int i;

	printf("5���� ������ �Է��Ͻÿ�: ");

	for (i = 0; i < SIZE; i++) {
		scanf("%d", &num[i]);
	}

	for (i = 0; i < SIZE; i++) {
		printf("num[%d] = %d\n", i, num[i]);
	}
}