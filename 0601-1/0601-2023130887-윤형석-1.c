/*
0601-2023130887-윤형석-1
(과제) 문자를 입력받아 다른 문자로 교체하는 프로그램
찾을 문자가 없는 경우 "찾는 문자가 없음" 메시지를 출력함
*/

#pragma warning(disable: 4996)
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
	char str[100];
	char chrToFind;
	char chrToRpl;
	char* pos;

	printf("문자열 입력: ");
	gets(str);
	printf("문자열 시작 위치: %d", str);

	printf("\n\n");

	do {
		printf("찾을 문자 입력: ");
		chrToFind = getche();
		printf("\n");
		pos = strchr(str, chrToFind);

		if (pos) {
			printf("찾은 문자 위치: %d\n", pos);
			printf("\n");
			printf("교체할 문자 입력: ");
			chrToRpl = getche();
			printf("\n");

			printf("교체할 문자 인덱스: %d\n", pos - str);
			*pos = chrToRpl;

			printf("\n");

			printf("<결과>\n");
			printf("수정된 문자열: %s", str);
		}
		else {
			printf("문자 %c를 찾을 수 없음!\n", chrToFind);
		}

		printf("\n");
	} while (!pos);

	return 0;
}