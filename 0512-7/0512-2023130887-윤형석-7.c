/*
0512-2023130887-������-7
���ȣ���� �̿��� ���(���丮��) ���ϱ�
*/

#pragma warning(disable:4996)
#include <stdio.h>

int factorial(int num) {
	if (num == 1) {
		return num;
	}
	else if (num >= 2) {
		return num * factorial(num - 1);
	}
}

int main() {
	int num;

	printf("����� ���� ������: ");
	scanf("%d", &num);

	printf("%d! = %d", num, factorial(num));

	return 0;
}