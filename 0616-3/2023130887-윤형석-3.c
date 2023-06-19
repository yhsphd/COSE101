#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

void reverse(char string[]) {
	int len = strlen(string);
	int i;
	char temp;

	for (i = 0; i < len / 2; i++) {
		temp = string[i];
		string[i] = string[len - 1 - i];
		string[len - 1 - i] = temp;
	}
}

int main() {
	FILE* fp;
	char text[100];
	char* pos, *lastpos, *currpos;

	// 파일 작성
	fp = fopen("input2.txt", "w");
	if (fp == NULL) {
		exit(1);
	}

	fputs("korea university in korea", fp);

	fclose(fp);

	// 파일 읽기
	fp = fopen("input2.txt", "r");
	if (fp == NULL) {
		exit(1);
	}

	fgets(text, 100, fp);

	lastpos = text;
	pos = strtok(text, " ");
	while (pos != NULL) {
		reverse(pos);
		printf("%s ", pos);
		pos = strtok(NULL, " ");
	}

	return 0;
}