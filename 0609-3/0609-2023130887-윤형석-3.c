/*
0609-2023130887-윤형석-3
문자열 단위 입출력 - fputs, fgets
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

	printf("파일 이름: ");
	scanf("%s", &filePath);

	if ((fp = fopen(filePath, "r")) == NULL) {
		printf("파일 열기 실패!\n");
		exit(1);
	}

	printf("찾을 단어: ");
	scanf("%s", &strToFind);

	printf("-------------------------------\n");

	while (fgets(buffer, sizeof(buffer), fp)) {
		line++;
		if (strstr(buffer, strToFind)) {
			printf("줄 번호: %d: %s\n", line, buffer);
		}
	}
	fclose(fp);

	return 0;
}