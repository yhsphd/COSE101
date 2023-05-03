/*
0428-2023130887-À±Çü¼®-6
ÇÔ¼ö
*/

#pragma warning(disable:4996)
#include <stdio.h>

int add(int, int);

int main() {
	int x, y;

	scanf("%d", &x);
	scanf("%d", &y);
	printf("%d + %d = %d", x, y, add(x, y));

	return 0;
}

int add(int num1, int num2) {
	return num1 + num2;
}