/*
0512-2023130887-윤형석-6
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

	// a 그대로 출력
	for (i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	// 함수 호출 시 배열 전달
	// call-by-reference
	modifyArray(a, SIZE);
	for (i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	// 함수 호출 시 배열 요소값 전달
	// call-by-value
	modifyElement(a[3]);
	for (i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}
	printf("\n");

	// 함수 호출 시 주소 전달(포인터)
	modifyElementPointer(&a[3]);
	for (i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}

	return 0;
}