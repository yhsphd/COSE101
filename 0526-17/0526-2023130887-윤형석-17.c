/*
0526-2023130887-������-17
����ü �迭 �����
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

	printf("��ȣ: ");
	scanf("%d", &students[2].id);
	printf("�̸�: ");
	scanf("%s", students[2].name);
	printf("����: ");
	scanf("%lf", &students[2].grade);

	printf("\n<���>\n\n");

	for (i = 0; i < 3; i++) {
		printf("��ȣ: %d\n", students[i].id);
		printf("�̸�: %s\n", students[i].name);
		printf("����: %.2lf\n\n", students[i].grade);
	}

	return 0;
}