/*
0609-2023130887-윤형석-5
구조체를 이진모드로 파일에 쓴 후, (읽어서) 모니터에 출력하기
*/

#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

typedef struct {
	int number;
	char name[100];
	double gpa;
} student;


int main() {
	student students[SIZE] = {
		{1, "Kim", 3.99},
		{2, "Min", 2.68},
		{3, "Lee", 4.01}
	};
	student s;

	FILE* fp = NULL;
	int i;

	if ((fp = fopen("D:\\students.dat", "wb")) == NULL) {
		printf("출력 파일 읽기 실패!\n");
		exit(1);
	}
	fwrite(students, sizeof(student), SIZE, fp);
	fclose(fp);

	if ((fp = fopen("D:\\students.dat", "rb")) == NULL) {
		printf("입력 파일 읽기 실패!\n");
		exit(1);
	}
	for (i = 0; i < SIZE; i++) {
		fread(&s, sizeof(student), 1, fp);
		printf("번호: %d, 이름: %s, 평점: %.2lf\n", s.number, s.name, s.gpa);
	}
	fclose(fp);

	return 0;
}