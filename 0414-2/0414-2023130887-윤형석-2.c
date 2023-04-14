/*
0414-2023130887-윤형석-2
음수 입력 시 입력을 끝내고 평균을 계산함 - for문
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int i = 0, num = 0, sum = 0;
	double avg;

	for (;;) {
		printf("학생 성적을 입력하세요: ");
		scanf("%d", &num);

		if (num < 0) {
			break;
		}

		i++;
		sum += num;
	}

	printf("학생들의 성적의 평균은 %.2f입니다.", sum / (double)i);
}