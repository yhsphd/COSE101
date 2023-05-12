/*
0512-2023130887-윤형석-1
두 실수를 입력받아 사칙연산 결과를 출력하는 프로그램
사칙연산 출력을 위해 4번 함수 호출
*/

#pragma warning(disable:4996)
#include <stdio.h>

void pr(double num) {
	printf("------------\n");
	printf("결과 = %.2lf\n", num);
	printf("------------\n");
}

int main() {
	double num1, num2;

	printf("사칙연산을 할 수 실수 입력: ");
	scanf("%lf %lf", &num1, &num2);

	pr(num1 + num2);
	pr(num1 - num2);
	pr(num1 * num2);
	pr(num1 / num2);

	return 0;
}