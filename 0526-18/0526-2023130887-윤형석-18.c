/*
0526-2023130887-������-18
����ü�� ����Ű�� ������
*/

#include <stdio.h>

int main() {
	struct student {
		int id;
		char name[100];
		double grade;
	} s = { 2023130887, "������", 4.5 };

	struct student* sPtr = &s;

	printf("�й�: %d, �̸�: %s, ����: %.2lf\n", s.id, s.name, s.grade);
	printf("�й�: %d, �̸�: %s, ����: %.2lf\n", (*sPtr).id, (*sPtr).name, (*sPtr).grade);
	printf("�й�: %d, �̸�: %s, ����: %.2lf\n", sPtr->id, sPtr->name, sPtr->grade);

	return 0;
}