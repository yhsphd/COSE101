/*
0324-2023130887-윤형석-3
학번과 비번을 입력받아 출력하는 프로그램
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int id, pw;

	printf("학번(8자리)와 비밀번호(4자리)를 입력하세요.\n");
	printf("학번: ________\b\b\b\b\b\b\b\b");
	scanf("%d", &id);
	printf("비번: ____\b\b\b\b");
	scanf("%d", &pw);

	printf("\n");
	printf("학번은 \"%d\", 비번은 \"%d\"입니다.", id, pw);
}