/*
0607-2023130887-윤형석
(과제)
구조체, typedef, 함수(call by reference) 이용
번호로 학생을 구분함, 동일 번호 입력 시 중복 오류 처리
전체 학생 정보, 최고 학생 정보를 출력함
입력과 출력은 main에서, 구조체를 넘겨받아 최고 학점을 계산하는 것은 함수에서 함
0 입력 시 종료함
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

	printf("----- 학생 정보 입력 (종료: 0) -----\n");

	// initialize students
	for (i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
		students[i].written = 0;
	}

	// get input
	for (;;) {
		printf("번호: ");
		scanf("%d", &index);
		if (index == 0) {
			printf("\n");
			break;
		}
		else if (students[index - 1].written) {
			printf("동일한 데이터 존재!\n\n");
			continue;
		}
		students[index - 1].id = index;
		students[index - 1].written = 1;
		printf("이름: ");
		scanf("%s", &students[index - 1].name);
		printf("학점: ");
		scanf("%lf", &students[index - 1].grade);
		getchar();
		printf("\n");
	}

	// print every student
	printf("----- 전체 학생 정보 -----\n");
	for (i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
		if (students[i].written) {
			printf("번호: %d,\t이름: %s,\t학점: %.1lf\n", students[i].id, students[i].name, students[i].grade);
		}
	}

	printf("\n");

	// print best student
	printf("----- 최고 학점 학생 정보 -----\n");
	best = findBstStd(students, sizeof(students) / sizeof(students[0]));
	printf("번호: %d,\t이름: %s,\t학점: %.1lf\n", students[best].id, students[best].name, students[best].grade);

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