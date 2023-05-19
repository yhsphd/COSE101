/*
0519-2023130887-윤형석-4
정수와 실수를 모두 교환할 수 있는 함수 프로그램
함수에서 1이면 정수 교환 2이면 실수 교환이 되도록 처리
*/

#pragma warning(disable:4996)
#include <stdio.h>

void swap(void* num1, void* num2) {
	int temp;
	temp = *(int*)num1;
	*(int*)num1 = *(int*)num2;
	*(int*)num2 = temp;
}

int main(void) {
	int x, y;

	printf("두 수를 입력하세요: ");
	scanf("%d %d", &x, &y);

	swap(&x, &y);
	printf("%d %d", x, y);

	return 0;
}