/*
0428-2023130887-윤형석-5
문자열 입출력
*/

#pragma warning(disable:4996)
#include <stdio.h>
#define LEN 5

int main() {
	char chr;
	char str[20];

	printf("문자 입력: ");
	scanf("%c", &chr);
	printf("입력한 문자: %c\n", chr);
	printf("%%d로 출력: %d\n", chr);

	printf("\n");

	printf("문자열 입력: ");
	scanf("%s", str);
	printf("입력한 문자열: %s\n", str);
	printf("%%d로 출력: %d\n", str);

	return 0;
}
