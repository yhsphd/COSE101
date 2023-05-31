/*
0526-2023130887-윤형석-11
strcspn(), strpbrk(), strspn()
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "abcde fgh";
	char str2[] = "go";

	// strcspn: s2에 포함되지 않은 문자로 구성된 s1에서의 길이(span)
	printf("%d\n", strcspn(str, "cd"));
	printf("%d\n", strcspn(str, "fd"));
	printf("%d\n", strcspn(str, "fda"));
	printf("%d\n", strcspn(str, "zecib"));
	printf("%d\n", strcspn(str, str2));
	printf("\n");

	// strpbrk: strcspn에서 걸린 부분의 주소
	printf("%s\n", strpbrk(str, "cd"));
	printf("%s\n", strpbrk(str, "fd"));
	printf("%s\n", strpbrk(str, "fda"));
	printf("%s\n", strpbrk(str, "zecib"));
	printf("%s\n", strpbrk(str, str2));
	printf("\n");

	// strspn: s2에 포함되는 문자로만 연속 구성된 s1에서의 길이(span)
	printf("%d\n", strspn(str, "a"));
	printf("%d\n", strspn(str, "ab"));
	printf("%d\n", strspn(str, "ba"));
	printf("%d\n", strspn(str, "abd"));
	printf("%d\n", strspn(str, "cbae"));
	printf("%d\n", strspn(str, str2));

	return 0;
}