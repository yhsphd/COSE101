/*
0609-2023130887-������-1
���� ���� ����� - fputc, fgetc
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	FILE* fp = NULL;
	char text[100];
	char ch;
	int i;

	fp = fopen("D:\\sample.txt", "w");

	if (fp == NULL) {
		printf("���� ���� ����\n");
		exit(1);
	}

	gets(text);
	for (i = 0; i < sizeof(text) / sizeof(text[0]); i++) {
		if (text[i] == NULL) {
			break;
		}
		fputc(text[i], fp);
	}
	fclose(fp);
	printf("���� �Ϸ�!\n\n");

	fp = fopen("D:\\sample.txt", "r");

	if (fp == NULL) {
		printf("���� ���� ����\n");
	}

	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}
	fclose(fp);
	printf("\n�б� �Ϸ�!\n");

	return 0;
}