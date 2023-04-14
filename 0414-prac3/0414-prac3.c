/*
continue ¹®
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int i;
	for (i = 0; i < 9; i++) {
		if (i % 2 == 1) {
			continue;
		}
		printf("%d", i);
	}
}