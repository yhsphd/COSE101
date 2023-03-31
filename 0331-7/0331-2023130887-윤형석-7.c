/*
0331-2023130887-윤형석-7
문자 분류(대문자, 소문자, 숫자, 기타문자) 프로그램
*/

#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	char character;

	printf("문자를 입력하세요: ");
	scanf("%c", &character);

	if ('A' <= character && character <= 'Z') {
		printf("%c: 대문자\n", character);
	}
	else if ('a' <= character && character <= 'z') {
		printf("%c: 소문자\n", character);
	}
	else if ('0' <= character && character <= '9') {
		printf("%c: 숫자\n", character);
	}
	else {
		printf("%c: 기타 문자\n", character);
	}
}