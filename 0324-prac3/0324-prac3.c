// 아스키 코드값의 연산

#include <stdio.h>

void main() {
	char code = 'K';
	char beep = 7;			// = '\a'
	char backslash = 92;	// = '\\'
	char backspace = 8;		// = '\b'

	printf("%d %d %d\n", code, code + 1, code + 2);
	printf("%c %c %c\n", code, code + 1, code + 2);
	printf("%c", code + 32);

	printf("%c", beep);
	printf("%c", backslash);
	printf("%c", backspace);
}