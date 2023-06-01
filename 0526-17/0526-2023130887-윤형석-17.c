/*
0526-2023130887-윤형석-17
구조체 배열 만들기
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	struct student {
		int id;
		char name[100];
		double grade;
	} students[3] = { {1, "Park", 4.0} };

	int i;

	students[1].id = 2;
	strcpy(students[1].name, "Kim");
	students[1].grade = 3.2;

	printf("번호: ");
	scanf("%d", &students[2].id);
	printf("이름: ");
	scanf("%s", students[2].name);
	printf("점수: ");
	scanf("%lf", &students[2].grade);

	printf("\n<결과>\n\n");

	for (i = 0; i < 3; i++) {
		printf("번호: %d\n", students[i].id);
		printf("이름: %s\n", students[i].name);
		printf("점수: %.2lf\n\n", students[i].grade);
	}

	return 0;
}