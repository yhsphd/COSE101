/*
0523-2023130887-윤형석
(과제) 두 문자열을 입력받아 비교하기
입력 문자열의 길이는 10자 이내임
입출력은 main에서, 문자열의 비교는 함수에서 함
함수는 두 문자열이 동일하면 1을, 그렇지 않으면 0을 return함
call-by-reference를 이용할 것
'string.h'는 사용하지 말 걸
*/

#pragma warning(disable: 4996)
#include <stdio.h>

#define SIZE 10

int compareString(char str1[], char str2[]) {
	int i;
	int flag = 1;

	for (i = 0; i < SIZE; i++) {
		if (str1[i] != str2[i]) {
			flag = 0;
			break;
		}
	}

	return flag;
}

int main() {
	char str1[SIZE + 1], str2[SIZE + 1];
	int match = 0;

	printf("두 문자열 입력: ");
	scanf("%s %s", str1, str2);

	match = compareString(str1, str2);

	printf("%s and %s: %s", str1, str2, match ? "equal" : "not equal");

	return 0;
}