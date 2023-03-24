/*
0324-2023130887-윤형석-2
이니셜, 타율, 나이를 입력받아 출력하는 프로그램
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	char name;
	float rate;
	int age;

	printf("이니셜을 입력하세요: ");
	scanf("%c", &name);
	printf("타율을 입력하세요: ");
	scanf("%f", &rate);
	printf("나이를 입력하세요: ");
	scanf("%d", &age);

	printf("\n");

	printf("*** 선수 %c ***\n", name);
	printf("타율: %.3f\n", rate);
	printf("나이: %d세\n", age);
}