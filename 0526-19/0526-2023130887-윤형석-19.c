/*
0526-2023130887-������-19
�����͸� ����� ������ ����ü
*/

#include <stdio.h>

int main() {
	struct date {
		int year;
		int month;
		int day;
	} d = { 2004, 5, 25 };

	struct student {
		int id;
		char name[100];
		double grade;
		struct date* dd;
	} s = { 2023130887, "������", 4.5, &d };

	printf("�й�: %d\n�̸�: %s\n����: %.2lf\n", s.id, s.name, s.grade);
	printf("�������: %d�� %d�� %d��\n", (*s.dd).year, (*s.dd).month, (*s.dd).day);
	printf("�������: %d�� %d�� %d��\n", s.dd->year, s.dd->month, s.dd->day);

	return 0;
}