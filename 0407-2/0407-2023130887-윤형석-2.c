/*
0407-2023130887-윤형석-2
입력한 문자에 대한 결과를 출력하는 프로그램 (a, b, c, 기타)
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	char chr;

	printf("문자(a-c)를 입력하시오: ");
	scanf("%c", &chr);

	switch (chr) {
	case 'a':
		printf("'에이'입니다.");
		break;
	case 'b':
		printf("'비'입니다.");
		break;
	case'c':
		printf("'씨'입니다.");
		break;
	default:
		printf("기타 입니다.");
		break;
	}
}