/*
0526-2023130887-������-5
���ڿ��� ���̸� ���ϴ� ���α׷�
*/

#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	char str[100];
	int i;

	printf("���ڿ� �Է�: ");
	scanf("%[^\n]%*c", str);

	i = 0;
	while (str[i] != '\0') {	// '\0' or NULL or 0
		i++;
	}

	printf("���ڿ� \"%s\"�� ����: %d", str, i);

	return 0;
}