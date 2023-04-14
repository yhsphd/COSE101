/*
0414-2023130887-윤형석-9
세 학급 및 전체 학생들의 평균 성적 구하기
각 학급의 학생 수는 5명
*/

#pragma warning(disable: 4996)
#include <stdio.h>

#define CLASSES 3
#define STUDENTS 5

void main() {
	int scores[CLASSES][STUDENTS];
	int i, j;
	int sum1 = 0;
	int sum2 = 0;


	for (i = 0; i < CLASSES; i++) {
		printf("%d반 학생들의 성적(5명): ", i + 1);
		for (j = 0; j < STUDENTS; j++) {
			scanf("%d", &scores[i][j]);
		}
	}

	printf("\n");

	for (i = 0; i < CLASSES; i++) {
		sum1 = 0;
		for (j = 0; j < STUDENTS; j++) {
			sum1 += scores[i][j];
		}
		sum2 += sum1;
		printf("%d반 학생들의 성적 평균: %.2lf\n", i + 1, sum1 / (double)STUDENTS);
	}
	printf("전체 학생 성적 평균: %.2lf", sum2 / (double)(CLASSES * STUDENTS));
}