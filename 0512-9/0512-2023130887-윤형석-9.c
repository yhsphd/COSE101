/*
0512-2023130887-������-9
���ȣ���� �̿��� �Ǻ���ġ ����
*/

#pragma warning(disable:4996)
#include <stdio.h>

int Fibonacci(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	else {
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}

int main() {
	int max, i;

	printf("�Ǻ���ġ ���� n�� ���ϱ�\nn=");
	scanf("%d", &max);

	printf("\n");

	for (i = 0; i < max; i++) {
		printf("%d\n", Fibonacci(i));
	}

	return 0;
}