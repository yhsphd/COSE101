/*
0526-2023130887-윤형석-5
문자열의 길이를 구하는 프로그램
*/

#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	char str[100];
	int i;

	printf("문자열 입력: ");
	scanf("%[^\n]%*c", str);

	i = 0;
	while (str[i] != '\0') {	// '\0' or NULL or 0
		i++;
	}

	printf("문자열 \"%s\"의 길이: %d", str, i);

	return 0;
}