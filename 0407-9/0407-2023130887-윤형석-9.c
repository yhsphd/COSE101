/*
0407-2023130887-������-9
�ݺ��� �̿��� ���(���丮��) ���ϱ�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int num = 0;
	int ans = 1;

	printf("����� ���� ������: ");
	scanf("%d", &num);

	if (num < 0) {
		printf("������ ����� ���� �� �����ϴ�.");
	}
	else if (num == 0) {
		printf("0! = 1");
	}
	else {
		for (int i = 1; i <= num; i++) {
			ans *= i;
		}
		printf("%d! = %d", num, ans);
	}
}