/*
0331-2023130887-윤형석-6
점수를 입력받아 상(80이상), 중(60)이상, 하(나머지)로 구분
*/

#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	int score;

	printf("점수를 입력하세요: ");
	scanf("%d", &score);

	/*
	if (score >= 80) {
		printf("상\n");
		return;
	}
	if (score >= 60) {
		printf("중\n");
		return;
	}
	printf("하\n");*/

	/*
	if (score >= 80) {
		printf("상\n");
	}
	if (score < 80 && score >= 60) {
		printf("중\n");
	}
	if (score < 60) {
		printf("하\n");
	}
	*/

	/*if (score >= 80) {
		printf("상\n");
	}
	else {
		if (score >= 60) {
			printf("중\n");
		}
		else {
			printf("하\n");
		}
	}*/

	if (score >= 80) {
		printf("상\n");
	}
	else if (score >= 60) {
		printf("중\n");
	}
	else {
		printf("하\n");
	}
}