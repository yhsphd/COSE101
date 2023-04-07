/*
0407-2023130887-윤형석-3
1-10의 양수를 입력받아
3 이하인 경우 '하', 8 이상인 경우 '상', 나머지는 '중'을 출력함
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int num;

	while (1) {
		printf("숫자 입력: ");
		scanf("%d", &num);

		printf("\n");

		if (num > 10 || num < 1) {
			printf("다시 입력하세요.\n");
			continue;
		}

		switch (num) {
		case 1:
		case 2:
		case 3:
			printf("하");
			break;
		case 8:
		case 9:
		case 10:
			printf("상");
			break;
		default:
			printf("중");
			break;
		}
		break;
	}
}