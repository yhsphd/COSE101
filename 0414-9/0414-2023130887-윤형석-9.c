/*
0414-2023130887-������-9
�� �б� �� ��ü �л����� ��� ���� ���ϱ�
�� �б��� �л� ���� 5��
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
		printf("%d�� �л����� ����(5��): ", i + 1);
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
		printf("%d�� �л����� ���� ���: %.2lf\n", i + 1, sum1 / (double)STUDENTS);
	}
	printf("��ü �л� ���� ���: %.2lf", sum2 / (double)(CLASSES * STUDENTS));
}