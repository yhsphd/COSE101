/*
0331-2023130887-������-6
������ �Է¹޾� ��(80�̻�), ��(60)�̻�, ��(������)�� ����
*/

#include <stdio.h>
#pragma warning(disable: 4996)

void main() {
	int score;

	printf("������ �Է��ϼ���: ");
	scanf("%d", &score);

	/*
	if (score >= 80) {
		printf("��\n");
		return;
	}
	if (score >= 60) {
		printf("��\n");
		return;
	}
	printf("��\n");*/

	/*
	if (score >= 80) {
		printf("��\n");
	}
	if (score < 80 && score >= 60) {
		printf("��\n");
	}
	if (score < 60) {
		printf("��\n");
	}
	*/

	/*if (score >= 80) {
		printf("��\n");
	}
	else {
		if (score >= 60) {
			printf("��\n");
		}
		else {
			printf("��\n");
		}
	}*/

	if (score >= 80) {
		printf("��\n");
	}
	else if (score >= 60) {
		printf("��\n");
	}
	else {
		printf("��\n");
	}
}