/*
0609-2023130887-윤형석-1
문자 단위 입출력 - fputc, fgetc
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
		printf("파일 열기 실패\n");
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
	printf("쓰기 완료!\n\n");

	fp = fopen("D:\\sample.txt", "r");

	if (fp == NULL) {
		printf("파일 열기 실패\n");
	}

	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) {
			break;
		}
		printf("%c", ch);
	}
	fclose(fp);
	printf("\n읽기 완료!\n");

	return 0;
}