/*
0607-2023130887-������
(����)
����ü, typedef, �Լ�(call by reference) �̿�
��ȣ�� �л��� ������, ���� ��ȣ �Է� �� �ߺ� ���� ó��
��ü �л� ����, �ְ� �л� ������ �����
�Է°� ����� main����, ����ü�� �Ѱܹ޾� �ְ� ������ ����ϴ� ���� �Լ����� ��
0 �Է� �� ������
*/

#pragma warning(disable: 4996)
#include <stdio.h>

typedef struct {
	int written;
	int id;
	char name[100];
	double grade;
} student;

int findBstStd(student* students, int cnt);

int main() {
	student students[100];
	int i;
	int index;
	int best;

	printf("----- �л� ���� �Է� (����: 0) -----\n");

	// initialize students
	for (i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
		students[i].written = 0;
	}

	// get input
	for (;;) {
		printf("��ȣ: ");
		scanf("%d", &index);
		if (index == 0) {
			printf("\n");
			break;
		}
		else if (students[index - 1].written) {
			printf("������ ������ ����!\n\n");
			continue;
		}
		students[index - 1].id = index;
		students[index - 1].written = 1;
		printf("�̸�: ");
		scanf("%s", &students[index - 1].name);
		printf("����: ");
		scanf("%lf", &students[index - 1].grade);
		getchar();
		printf("\n");
	}

	// print every student
	printf("----- ��ü �л� ���� -----\n");
	for (i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
		if (students[i].written) {
			printf("��ȣ: %d,\t�̸�: %s,\t����: %.1lf\n", students[i].id, students[i].name, students[i].grade);
		}
	}

	printf("\n");

	// print best student
	printf("----- �ְ� ���� �л� ���� -----\n");
	best = findBstStd(students, sizeof(students) / sizeof(students[0]));
	printf("��ȣ: %d,\t�̸�: %s,\t����: %.1lf\n", students[best].id, students[best].name, students[best].grade);

	return 0;
}

int findBstStd(student* students, int cnt) {
	int i;
	int bstStd = 0;

	for (i = 0; i < cnt; i++) {
		if (!students[i].written) {
			continue;
		}
		else if (students[i].grade > students[bstStd].grade) {
			bstStd = i;
		}
	}

	return bstStd;
}