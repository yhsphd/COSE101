/*
0526-2023130887-������-8
strchr() �Լ�
*/

#include <stdio.h>
#include <string.h>

int main() {
	char str[] = "C Language Test";

	char c1 = 'a';
	char c2 = 'p';

	char* p1, * p2;

	printf("���� �迭: %s\n", str);
	printf("���� �迭 ���� �ּ�:\t%d\n", str);

	p1 = strchr(str, c1);
	p2 = strchr(str, c2);

	printf("ã�� ���� 'a':\t\t%d\n", p1);
	printf("ã�� ���� 'p':\t\t%d\n", p2);

	printf("ã�� ���� 'a':\t\t%s\n", p1);
	printf("ã�� ���� 'p':\t\t%s\n", p2);

	return 0;
}