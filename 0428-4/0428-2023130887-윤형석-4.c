/*
0428-2023130887-윤형석-4
두 변수 내 숫자 정렬하기
*/

#pragma warning(disable:4996)
#include <stdio.h>
#define LEN 5

int main() {
	int num[LEN];
	int flag, temp, i = 0, pass = 1;

	printf("%d개의 수 입력: ", LEN);

	for (i = 0; i < LEN; i++) {
		scanf("%d", &num[i]);
	}

	printf("\n<정렬 전>\n");
	for (i = 0; i < LEN; i++) {
		printf("%d ", num[i]);
	}

	printf("\n");

	flag = 1;
	while (flag) {
		flag = 0;
		for (i = 0; i < LEN - 1; i++) {
			if (num[i] > num[i + 1]) {
				flag = 1;
				num[i] = num[i] ^ num[i + 1];
				num[i + 1] = num[i] ^ num[i + 1];
				num[i] = num[i] ^ num[i + 1];
			}
		}
		printf("\npass %d: ", pass);
		for (i = 0; i < LEN; i++) {
			printf("%d ", num[i]);
		}
		pass++;
	}

	printf("\n\n");

	printf("<정렬 후>\n");
	for (i = 0; i < LEN; i++) {
		printf("%d ", num[i]);
	}

	return 0;
}
