/*
0526-2023130887-윤형석-9
문자열 패턴이 있는지 검색하기: strstr() 함수
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "C Language Test";
	char strToFind[100];

	char* pos;

	printf("문자 배열: %s\n", str);
	printf("찾을 문자열 입력: ");

	gets(strToFind);

	pos = strstr(str, strToFind);

	if (pos) {
		printf("문자열을 찾음!\n");
		printf("문자 배열 위치:\t\t%d\n", str);
		printf("찾는 문자열 위치:\t%d\n", pos);
	}
	else {
		printf("문자열을 찾을 수 없음!\n");
	}

	return 0;
}