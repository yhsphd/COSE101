/*
0526-2023130887-������-7
���ڿ� ��
strcmp() �Լ� ����ϱ�, ���ڿ��� ���� �Է¹���
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[100];
	int result;

	printf("ù ��° �ܾ�: ");
	scanf("%s", str1);
	printf("�� ��° �ܾ�: ");
	scanf("%s", str2);
	
	result = strcmp(str1, str2);

	printf("���: %d\n", result);
	printf("%s", result == 0 ? "������" : "�ٸ�");

	return 0;
}