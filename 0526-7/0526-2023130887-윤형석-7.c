/*
0526-2023130887-윤형석-7
문자열 비교
strcmp() 함수 사용하기, 문자열을 직접 입력받음
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	char str1[100], str2[100];
	int result;

	printf("첫 번째 단어: ");
	scanf("%s", str1);
	printf("두 번째 단어: ");
	scanf("%s", str2);
	
	result = strcmp(str1, str2);

	printf("결과: %d\n", result);
	printf("%s", result == 0 ? "동일함" : "다름");

	return 0;
}