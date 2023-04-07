/*
0407-2023130887-윤형석-9
반복을 이용한 계승(팩토리얼) 구하기
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int num = 0;
	int ans = 1;

	printf("계승을 구할 정수값: ");
	scanf("%d", &num);

	if (num < 0) {
		printf("음수의 계승을 구할 수 없습니다.");
	}
	else if (num == 0) {
		printf("0! = 1");
	}
	else {
		for (int i = 1; i <= num; i++) {
			ans *= i;
		}
		printf("%d! = %d", num, ans);
	}
}