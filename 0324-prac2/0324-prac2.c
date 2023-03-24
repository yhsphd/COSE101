// 문자를 입력받아 문자와 아스키 코드값을 출력하는 프로그램

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	char c;

	printf("문자를 입력하세요: ");
	scanf("%c", &c);

	printf("입력된 문자는 %c이고, 아스키 코드값은 %d입니다.", c, c);
}