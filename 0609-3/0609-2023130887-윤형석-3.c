/*
0609-2023130887-������-3
���ڿ� ���� ����� - fputs, fgets
*/

#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>

int main() {
	char filePath[100];
	FILE* fp = NULL;
	char strToFind[100];
	char buffer[100];
	int line = 0;

	printf("���� �̸�: ");
	scanf("%s", &filePath);

	if ((fp = fopen(filePath, "r")) == NULL) {
		printf("���� ���� ����!\n");
		exit(1);
	}

	printf("ã�� �ܾ�: ");
	scanf("%s", &strToFind);

	printf("-------------------------------\n");

	while (fgets(buffer, sizeof(buffer), fp)) {
		line++;
		if (strstr(buffer, strToFind)) {
			printf("�� ��ȣ: %d: %s\n", line, buffer);
		}
	}
	fclose(fp);

	return 0;
}