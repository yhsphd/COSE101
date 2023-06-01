/*
0601-2023130887-윤형석-2
(과제) 구조체, 함수(call by reference)를 이월할 것
학생들의 평균 학점과 최고 학점, 최고학점인 학생의 이름을 출력함
입력과 출력은 main에서, 최고 학점 계산은 함수에서 처리함
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

	printf("학생 수(최대 10): ");
	scanf("%d", &cnt);

	printf("\n");

	for (i = 0; i < cnt; i++) {
		printf("학번: ");
		scanf("%d", &students[i].id);
		printf("이름: ");
		scanf("%s", &students[i].name);
		printf("학점: ");
		scanf("%lf", &students[i].grade);
		getchar();
		printf("\n");
	}

	printf("------------------------------------\n");

	for (i = 0; i < cnt; i++) {
		printf("학번: %d,\t이름: %s,\t학점: %.2lf\n", students[i].id, students[i].name, students[i].grade);
	}

	printf("\n");

	grade_avg = calcGrdAvg(&students, cnt);
	best = findBstStd(&students, cnt);

	printf("평균 학점: %.2lf\n", grade_avg);
	printf("최고 학점: %.2lf,\t이름: %s", students[best].grade, students[best].name);

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