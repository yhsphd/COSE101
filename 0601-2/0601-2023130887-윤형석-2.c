/*
0601-2023130887-������-2
(����) ����ü, �Լ�(call by reference)�� �̿��� ��
�л����� ��� ������ �ְ� ����, �ְ������� �л��� �̸��� �����
�Է°� ����� main����, �ְ� ���� ����� �Լ����� ó����
*/

#pragma warning(disable: 4996)
#include <stdio.h>

struct student {
	int id;
	char name[100];
	double grade;
};

double calcGrdAvg(struct student* students, int cnt);
int findBstStd(struct student* students, int cnt);

int main() {
	struct student students[10];
	int i, cnt;
	double grade_avg;
	int best;

	printf("�л� ��(�ִ� 10): ");
	scanf("%d", &cnt);

	printf("\n");

	for (i = 0; i < cnt; i++) {
		printf("�й�: ");
		scanf("%d", &students[i].id);
		printf("�̸�: ");
		scanf("%s", &students[i].name);
		printf("����: ");
		scanf("%lf", &students[i].grade);
		getchar();
		printf("\n");
	}

	printf("------------------------------------\n");

	for (i = 0; i < cnt; i++) {
		printf("�й�: %d,\t�̸�: %s,\t����: %.2lf\n", students[i].id, students[i].name, students[i].grade);
	}

	printf("\n");

	grade_avg = calcGrdAvg(&students, cnt);
	best = findBstStd(&students, cnt);

	printf("��� ����: %.2lf\n", grade_avg);
	printf("�ְ� ����: %.2lf,\t�̸�: %s", students[best].grade, students[best].name);

	return 0;
}

double calcGrdAvg(struct student* students, int cnt) {
	int i;
	double sum = 0;

	for (i = 0; i < cnt; i++) {
		sum += students[i].grade;
	}
	sum /= i;

	return sum;
}

int findBstStd(struct student* students, int cnt) {
	int i;
	int bstStd = 0;

	for (i = 0; i < cnt; i++) {
		if (students[i].grade > students[bstStd].grade) {
			bstStd = i;
		}
	}

	return bstStd;
}