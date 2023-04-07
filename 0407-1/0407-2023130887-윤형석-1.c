/*
0407-2023130887-윤형석-1
두 수를 입력받아 양수, 음수를 구분함
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int num1, num2;

	printf("첫 번째 수: ");
	scanf("%d", &num1);
	printf("두 번째 수: ");
	scanf("%d", &num2);

	printf("\n");

	if (num1 > 0 && num2 > 0) {
		printf("두 수 모두 양수");
	}
	else if (num1 < 0 && num2 < 0) {
		printf("두 수 모두 음수");
	}
	else if (num1 * num2 < 0) {
		printf("두 수 중 하나만 양수");
	}
	else {
		printf("두 수 중 0이 있음");
	}
}