/*
0414-2023130887-윤형석-3
소문자 입력 시 대문자로 변환하여 출력 (Q 입력 시 종료함)
반복문, break, continue 이용하기
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	char chr;

	for (;;) {
		printf("소문자 입력 (종료:Q): ");

		scanf(" %c", &chr);

		/*
		* scanf("%c", &chr);
		* getchar();
		*/

		/*
		* chr = getchar();
		*/

		if (chr == 'Q') {
			break;
		}
		else if (chr < 'a' || chr > 'z') {
			continue;
		}

		printf("변환된 대문자는 %c입니다.\n\n", chr - 32);
	}
}