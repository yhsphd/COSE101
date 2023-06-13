/*
0609-2023130887-������-2
���ڿ� ���� ����� - fputs, fgets
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	FILE* fp_in = NULL;
	FILE* fp_out = NULL;
	char buffer[100];
	char* p;
	int i;

	if ((fp_in = fopen("D:\\sample.txt", "r")) == NULL) {
		printf("�Է� ���� ���� ����!\n");
		exit(1);
	}
	if ((fp_out = fopen("D:\\sample2.txt", "w")) == NULL) {
		printf("��� ���� ���� ����!\n");
		exit(1);
	}

	while (1) {
		if (fgets(buffer, sizeof(buffer), fp_in) == NULL) {
			break;
		}
		fputs(buffer, fp_out);
	}

	fclose(fp_in);
	fclose(fp_out);
	printf("�Ϸ�!\n");

	return 0;
}