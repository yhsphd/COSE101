/*
0523-2023130887-������
(����) �� ���ڿ��� �Է¹޾� ���ϱ�
�Է� ���ڿ��� ���̴� 10�� �̳���
������� main����, ���ڿ��� �񱳴� �Լ����� ��
�Լ��� �� ���ڿ��� �����ϸ� 1��, �׷��� ������ 0�� return��
call-by-reference�� �̿��� ��
'string.h'�� ������� �� ��
*/

#pragma warning(disable: 4996)
#include <stdio.h>

#define SIZE 10

int compareString(char str1[], char str2[]) {
	int i;
	int flag = 1;

	for (i = 0; i < SIZE; i++) {
		if (str1[i] != str2[i]) {
			flag = 0;
			break;
		}
	}

	return flag;
}

int main() {
	char str1[SIZE + 1], str2[SIZE + 1];
	int match = 0;

	printf("�� ���ڿ� �Է�: ");
	scanf("%s %s", str1, str2);

	match = compareString(str1, str2);

	printf("%s and %s: %s", str1, str2, match ? "equal" : "not equal");

	return 0;
}