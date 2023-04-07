/*
0407-2023130887-윤형석-7
do...while문을 이용한 메뉴 선택 프로그램
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int sel;

	do {
		printf("1: 새로 만들기\n");
		printf("2: 파일 열기\n");
		printf("선택: ");
		scanf("%d", &sel);

		printf("\n");

		if (sel > 2 || sel <= 0) {
			printf("다시 입력하세요.\n");
		}
		else {
			printf("선택된 기능: %d", sel);
		}

		printf("\n");
	} while (sel > 2 || sel <= 0);
}