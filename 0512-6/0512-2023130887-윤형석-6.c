/*
0512-2023130887-������-6
call-by-reference, call-by-value
*/

#pragma warning(disable:4996)
#include <stdio.h>

#define SIZE 5

void modifyArray(int list[], int size) {
	int i;

	for (i = 0; i < SIZE; i++) {
		list[i] *= 2;
	}
}

void modifyElement(int e) {
	e *= 2;
}

void modifyElementPointer(int* e) {
	*e *= 2;
}

int main() {
	int a[SIZE] = { 1,2,3,4,5 };
	int i;

	// a �״�� ���
	for (i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	// �Լ� ȣ�� �� �迭 ����
	// call-by-reference
	modifyArray(a, SIZE);
	for (i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	// �Լ� ȣ�� �� �迭 ��Ұ� ����
	// call-by-value
	modifyElement(a[3]);
	for (i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	// �Լ� ȣ�� �� �ּ� ����(������)
	modifyElementPointer(&a[3]);
	for (i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}

	return 0;
}