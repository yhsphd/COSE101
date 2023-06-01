/*
0526-2023130887-윤형석-18
구조체를 가리키는 포인터
*/

#include <stdio.h>

int main() {
	struct student {
		int id;
		char name[100];
		double grade;
	} s = { 2023130887, "윤형석", 4.5 };

	struct student* sPtr = &s;

	printf("학번: %d, 이름: %s, 학점: %.2lf\n", s.id, s.name, s.grade);
	printf("학번: %d, 이름: %s, 학점: %.2lf\n", (*sPtr).id, (*sPtr).name, (*sPtr).grade);
	printf("학번: %d, 이름: %s, 학점: %.2lf\n", sPtr->id, sPtr->name, sPtr->grade);

	return 0;
}