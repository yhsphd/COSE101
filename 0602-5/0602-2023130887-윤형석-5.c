/*
0602-2023130887-윤형석-5
file1.txt에서 문자를 하나 읽어서 file2.txt에 쓰기
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	FILE* fp_in = NULL, * fp_out = NULL;
	int content;

	fp_in = fopen("D:\\file1.txt", "r");
	fp_out = fopen("D:\\file2.txt", "w");

	if (fp_in == NULL) {
		printf("file1 없음!\n");
	}
	else {
		content = fgetc(fp_in);
		printf("file2 출력 완료!\n");
		fputc(content, fp_out);
	}

	fclose(fp_in);
	fclose(fp_out);

	if (remove("D:\\file1.txt") == 0) {
		printf("file1 삭제 완료!\n");
	}
	else {
		printf("file1 삭제 불가!\n");
	}

	return 0;
}