/*
0601-2023130887-������-1
(����) ���ڸ� �Է¹޾� �ٸ� ���ڷ� ��ü�ϴ� ���α׷�
ã�� ���ڰ� ���� ��� "ã�� ���ڰ� ����" �޽����� �����
*/

#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
	char str[100];
	char chrToFind;
	char chrToRpl;
	char* pos;

	printf("���ڿ� �Է�: ");
	gets(str);
	printf("���ڿ� ���� ��ġ: %d", str);

	printf("\n\n");

	do {
		printf("ã�� ���� �Է�: ");
		chrToFind = getche();
		printf("\n");
		pos = strchr(str, chrToFind);

		if (pos) {
			printf("ã�� ���� ��ġ: %d\n", pos);
			printf("\n");
			printf("��ü�� ���� �Է�: ");
			chrToRpl = getche();
			printf("\n");

			printf("��ü�� ���� �ε���: %d\n", pos - str);
			*pos = chrToRpl;

			printf("\n");

			printf("<���>\n");
			printf("������ ���ڿ�: %s", str);
		}
		else {
			printf("���� %c�� ã�� �� ����!\n", chrToFind);
		}

		printf("\n");
	} while (!pos);

	return 0;
}