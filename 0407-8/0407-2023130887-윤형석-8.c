/*
0407-2023130887-윤형석-8
업다운 게임
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	const ans = 78;
	int num;
	int i = 1;

	printf("********** 숫자 맞히기 게임 **********\n");

	do {
		printf("\n정답을 맞춰보세요!: ");
		scanf("%d", &num);

		if (ans == num) {
			printf("\n축하합니다!\n시도횟수: %d", i);
		}
		else if (ans < num) {
			printf("값이 큽니다.");
		}
		else if (ans > num) {
			printf("값이 작습니다.");
		}
		i++;
	} while (ans != num);
}