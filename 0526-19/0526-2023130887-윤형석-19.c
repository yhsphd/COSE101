/*
0526-2023130887-윤형석-19
포인터를 멤버로 가지는 구조체
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
	} s = { 2023130887, "윤형석", 4.5, &d };

	printf("학번: %d\n이름: %s\n학점: %.2lf\n", s.id, s.name, s.grade);
	printf("생년월일: %d년 %d월 %d일\n", (*s.dd).year, (*s.dd).month, (*s.dd).day);
	printf("생년월일: %d년 %d월 %d일\n", s.dd->year, s.dd->month, s.dd->day);

	return 0;
}