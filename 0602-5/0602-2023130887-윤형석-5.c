/*
0602-2023130887-������-5
file1.txt���� ���ڸ� �ϳ� �о file2.txt�� ����
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	FILE* fp_in = NULL, * fp_out = NULL;
	int content;

	fp_in = fopen("D:\\file1.txt", "r");
	fp_out = fopen("D:\\file2.txt", "w");

	if (fp_in == NULL) {
		printf("file1 ����!\n");
	}
	else {
		content = fgetc(fp_in);
		printf("file2 ��� �Ϸ�!\n");
		fputc(content, fp_out);
	}

	fclose(fp_in);
	fclose(fp_out);

	if (remove("D:\\file1.txt") == 0) {
		printf("file1 ���� �Ϸ�!\n");
	}
	else {
		printf("file1 ���� �Ұ�!\n");
	}

	return 0;
}