/*
0526-2023130887-������-6
���� ó�� �Լ�
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main() {
	int chr;

	while (1) {
		printf("���� �Է�: ");
		chr = getche();

		if (chr == 'q') {
			break;
		}

		printf("\n");
		printf("----------------\n");
		printf("isdigit(%c)  = %d\n", chr, isdigit(chr));
		printf("isalpha(%c)  = %d\n", chr, isalpha(chr));
		printf("isupper(%c)  = %d\n", chr, isupper(chr));
		printf("islower(%c)  = %d\n", chr, islower(chr));
		printf("ispunct(%c)  = %d\n", chr, ispunct(chr));
		printf("isxdigit(%c) = %d\n", chr, isxdigit(chr));
		printf("isprint(%c)  = %d\n", chr, isprint(chr));
		printf("----------------\n");
		printf("\n");
	}

	return 0;
}