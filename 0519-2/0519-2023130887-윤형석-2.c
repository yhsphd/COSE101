/*
0519-2023130887-윤형석-2
두 개의 숫자 정렬하기, 포인터 이용
*/

#pragma warning(disable:4996)
#include <stdio.h>

void swap(int* num1, int* num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main(void) {
	int num1, num2;

	printf("두 수 입력: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2) {
		swap(&num1, &num2);
	}

	printf("결과: %d %d", num1, num2);

	return 0;
}