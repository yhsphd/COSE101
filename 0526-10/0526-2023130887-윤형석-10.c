/*
0526-2023130887-윤형석-10
반복문을 이용하여 문자열을 단어로 분리하기
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	char str[100];
	char* tok;

	printf("문자열 입력: ");
	gets(str);

	tok = strtok(str, " ");
	while (tok) {
		printf("토큰: %s\n", tok);
		tok = strtok(NULL, " ");
	}

	return 0;
}