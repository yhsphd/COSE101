/*
0512-2023130887-������-3
storage class - extern
�ٸ� ������ �Լ�, ���� ���� ���
*/

#include <stdio.h>

int value;

extern void sub();

int main(void) {
	sub();
	printf("%d\n", value);

	return 0;
}