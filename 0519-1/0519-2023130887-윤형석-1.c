/*
0519-2023130887-������-1
�������� ����
*/

#include <stdio.h>

int main() {
	int* p = NULL;
	int i = 10;
	p = &i;

	printf("p\t%d\n", p);
	printf("*p\t%d\n", *p);
	printf("++*p\t%d\n", ++*p);
	printf("i\t%d\n", i);
	printf("*++p\t%d\n", *++p);
	printf("*--p\t%d\n", *--p);
	printf("--*p\t%d\n", --*p);

	printf("\n\n============ i = 10, p = &i ============\n\n");
	i = 10;
	p = &i;

	printf("p\t%d\n", p);
	printf("*p\t%d\n", *p);
	printf("(*p)++\t%d\n", (*p)++);
	printf("i\t%d\n", i);
	printf("*p++\t%d\n", *p++);
	printf("*p--\t%d\n", *p--);
	printf("*p\t%d\n", *p);


	return 0;
}