/*
0526-2023130887-������-11
strcspn(), strpbrk(), strspn()
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "abcde fgh";
	char str2[] = "go";

	// strcspn: s2�� ���Ե��� ���� ���ڷ� ������ s1������ ����(span)
	printf("%d\n", strcspn(str, "cd"));
	printf("%d\n", strcspn(str, "fd"));
	printf("%d\n", strcspn(str, "fda"));
	printf("%d\n", strcspn(str, "zecib"));
	printf("%d\n", strcspn(str, str2));
	printf("\n");

	// strpbrk: strcspn���� �ɸ� �κ��� �ּ�
	printf("%s\n", strpbrk(str, "cd"));
	printf("%s\n", strpbrk(str, "fd"));
	printf("%s\n", strpbrk(str, "fda"));
	printf("%s\n", strpbrk(str, "zecib"));
	printf("%s\n", strpbrk(str, str2));
	printf("\n");

	// strspn: s2�� ���ԵǴ� ���ڷθ� ���� ������ s1������ ����(span)
	printf("%d\n", strspn(str, "a"));
	printf("%d\n", strspn(str, "ab"));
	printf("%d\n", strspn(str, "ba"));
	printf("%d\n", strspn(str, "abd"));
	printf("%d\n", strspn(str, "cbae"));
	printf("%d\n", strspn(str, str2));

	return 0;
}