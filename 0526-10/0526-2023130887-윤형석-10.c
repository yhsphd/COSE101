/*
0526-2023130887-������-10
�ݺ����� �̿��Ͽ� ���ڿ��� �ܾ�� �и��ϱ�
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	char* tok;

	printf("���ڿ� �Է�: ");
	gets(str);

	tok = strtok(str, " ");
	while (tok) {
		printf("��ū: %s\n", tok);
		tok = strtok(NULL, " ");
	}

	return 0;
}