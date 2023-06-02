/*
0602-2023130887-윤형석-6
fputc() 이용, 사용자가 입력한 내용(여러 문장)을 파일에 저장함
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	FILE* fp = NULL;
	int ch;

	fp = fopen("D:\\sample.txt", "w");

	if (fp == NULL) {
		printf("파일 열기 실패\n");
	}

	printf("문자 입력! (종료: ^Z)\n");

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