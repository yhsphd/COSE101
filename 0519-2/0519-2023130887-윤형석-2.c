/*
0519-2023130887-������-2
�� ���� ���� �����ϱ�, ������ �̿�
*/

#pragma warning(disable:4996)
#include <stdio.h>

void swap(int* num1, int* num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main(void) {
	int num1, num2;

	printf("�� �� �Է�: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2) {
		swap(&num1, &num2);
	}

	printf("���: %d %d", num1, num2);

	return 0;
}