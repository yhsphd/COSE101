/*
0526-2023130887-������-9
���ڿ� ������ �ִ��� �˻��ϱ�: strstr() �Լ�
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "C Language Test";
	char strToFind[100];

	char* pos;

	printf("���� �迭: %s\n", str);
	printf("ã�� ���ڿ� �Է�: ");

	gets(strToFind);

	pos = strstr(str, strToFind);

	if (pos) {
		printf("���ڿ��� ã��!\n");
		printf("���� �迭 ��ġ:\t\t%d\n", str);
		printf("ã�� ���ڿ� ��ġ:\t%d\n", pos);
	}
	else {
		printf("���ڿ��� ã�� �� ����!\n");
	}

	return 0;
}