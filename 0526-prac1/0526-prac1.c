// 문자 입출력 함수

#pragma warning(disable:4996)
#include <stdio.h>
#include <conio.h>

int main(void) {
	int ch;

	printf("getchar, putchar\n");
	ch = getchar();
	putchar(ch);

	printf("getch, putch\n");
	ch = getch();
	putch(ch);

	printf("\n");

	printf("getche, putch\n");
	ch = getche();
	putch(ch);

	return 0;
}