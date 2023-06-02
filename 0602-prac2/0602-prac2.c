#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	FILE* fp = NULL;
	int ch;

	fp = fopen("D:\\file.txt", "w");
	fputc('a', fp);
	fclose(fp);

	fp = fopen("D:\\file.txt", "a");
	fputc('b', fp);
	fclose(fp);

	fp = fopen("D:\\file.txt", "r");
	if (fp == NULL) {
		printf("파일 없음!");
	}
	else {
		ch = fgetc(fp);
		printf("%c", ch);
	}
	fclose(fp);

	return 0;
}