/*
0526-2023130887-윤형석-8
strchr() 함수
*/

#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "C Language Test";

	char c1 = 'a';
	char c2 = 'p';

	char* p1, * p2;

	printf("문자 배열: %s\n", str);
	printf("문자 배열 시작 주소:\t%d\n", str);

	p1 = strchr(str, c1);
	p2 = strchr(str, c2);

	printf("찾는 문자 'a':\t\t%d\n", p1);
	printf("찾는 문자 'p':\t\t%d\n", p2);

	printf("찾는 문자 'a':\t\t%s\n", p1);
	printf("찾는 문자 'p':\t\t%s\n", p2);

	return 0;
}