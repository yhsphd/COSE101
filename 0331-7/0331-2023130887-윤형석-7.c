/*
0331-2023130887-������-7
���� �з�(�빮��, �ҹ���, ����, ��Ÿ����) ���α׷�
*/

#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	char character;

	printf("���ڸ� �Է��ϼ���: ");
	scanf("%c", &character);

	if ('A' <= character && character <= 'Z') {
		printf("%c: �빮��\n", character);
	}
	else if ('a' <= character && character <= 'z') {
		printf("%c: �ҹ���\n", character);
	}
	else if ('0' <= character && character <= '9') {
		printf("%c: ����\n", character);
	}
	else {
		printf("%c: ��Ÿ ����\n", character);
	}
}