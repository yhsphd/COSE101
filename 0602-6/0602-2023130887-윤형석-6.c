/*
0602-2023130887-������-6
fputc() �̿�, ����ڰ� �Է��� ����(���� ����)�� ���Ͽ� ������
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	FILE* fp = NULL;
	int ch;

	fp = fopen("D:\\sample.txt", "w");

	if (fp == NULL) {
		printf("���� ���� ����\n");
	}

	printf("���� �Է�! (����: ^Z)\n");

	while (1) {
		ch = getchar();
		if (ch == EOF) {
			break;
		}
		fputc(ch, fp);
	}

	fclose(fp);

	return 0;
}