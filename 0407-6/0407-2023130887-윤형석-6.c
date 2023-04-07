/*
0407-2023130887-윤형석-6
while 문을 이용하여 N부터 M까지의 합을 계산하는 프로그램
N(시작 값), M(끝 값)은 직접 입력받음
끝 값이 시작 값보다 작은 경우, 값을 재입력받음
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int sum = 0;
	int N, M;
	int i;

	while (1) {
		printf("시작 값, 끝 값 입력: ");
		scanf("%d %d", &N, &M);
		printf("\n");

		if (N > M) {
			printf("시작 값이 끝 값보다 큼!\n다시 입력하세요.\n\n");
			continue;
		}

		i = N;

		while (i <= M) {
			sum += i;
			i++;
		}

		printf("%d부터 %d까지의 합: %d", N, M, sum);
		break;
	}
}