/*
0414-2023130887-윤형석-5
산수 문제 자동 출제하기
맞히면 종료함
문제를 틀리면 계속 반복하여 문제가 출제됨
*/

#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(NULL));
	int a, b, ans;

	printf("두 자리 수 덧셈\n\n");

	while (1) {
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
		printf("%d + %d = ", a, b);
		scanf("%d", &ans);

		if (ans == a + b) {
			printf("맞았습니다.\n\n");
			break;
		}
		else {
			printf("틀렸습니다. 정답은 %d\n\n", a + b);
		}
	}
}