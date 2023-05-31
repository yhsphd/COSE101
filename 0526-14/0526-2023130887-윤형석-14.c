/*
0526-2023130887-윤형석-14
미니 영한 사전
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	char dic[5][2][50] = {
		{"apple", "사과"},
		{"banana", "바나나"},
		{"cat", "고양이"},
		{"computer", "컴퓨터"},
		{"dictionary", "사전"}
	};

	char search[100];
	int i, flag;

	while (1) {
		flag = 0;
		printf("찾을 영어 단어: ");
		scanf("%s", search);

		if (strcmp(search, "q") == 0) {
			printf("프로그램 종료\n");
			break;
		}

		for (i = 0; i < 5; i++) {
			if (strcmp(dic[i][0], search) == 0) {
				printf("%s: %s\n\n", dic[i][0], dic[i][1]);
				flag = 1;
				break;
			}
		}
		if (!flag) {
			printf("사전에 없음!\n\n");
		}
	}

	return 0;
}