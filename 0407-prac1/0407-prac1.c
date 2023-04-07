/*
switch - case 문
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int num;
	
	printf("정수를 입력하시오: ");
	scanf("%d", &num);

	switch (num) {
	case 1:
		printf("일");
		break;
	case 2:
		printf("이");
		break;
	case 3:
		printf("삼");
		break;
	default:
		printf("기타");
		break;
	}
}