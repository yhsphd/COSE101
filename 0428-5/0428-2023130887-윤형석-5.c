/*
0428-2023130887-������-5
���ڿ� �����
*/

#pragma warning(disable:4996)
#include <stdio.h>
#define LEN 5

int main() {
	char chr;
	char str[20];

	printf("���� �Է�: ");
	scanf("%c", &chr);
	printf("�Է��� ����: %c\n", chr);
	printf("%%d�� ���: %d\n", chr);

	printf("\n");

	printf("���ڿ� �Է�: ");
	scanf("%s", str);
	printf("�Է��� ���ڿ�: %s\n", str);
	printf("%%d�� ���: %d\n", str);

	return 0;
}
