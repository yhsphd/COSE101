/*
0519-2023130887-������-4
������ �Ǽ��� ��� ��ȯ�� �� �ִ� �Լ� ���α׷�
�Լ����� 1�̸� ���� ��ȯ 2�̸� �Ǽ� ��ȯ�� �ǵ��� ó��
*/

#pragma warning(disable:4996)
#include <stdio.h>

void swap(void* num1, void* num2) {
	int temp;
	temp = *(int*)num1;
	*(int*)num1 = *(int*)num2;
	*(int*)num2 = temp;
}

int main(void) {
	int x, y;

	printf("�� ���� �Է��ϼ���: ");
	scanf("%d %d", &x, &y);

	swap(&x, &y);
	printf("%d %d", x, y);

	return 0;
}