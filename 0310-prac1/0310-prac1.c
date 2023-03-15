/*
0310-2023130887-윤형석
*/

#include <stdio.h>

int main(void) {
	printf("2023130887\n윤형석\n");

	printf("\n");

	printf("%d\n", 10);
	printf("%d\n", 10 + 20);
	printf("%d %d\n", 10, 20);
	printf("은하철도 %d\n", 999);

	printf("\n");

	printf("a\n");			// 문자열
	printf("%c\n", 'a');	// 문자(')
	printf("%s\n", "a");	// 문자열(")	위아래 바꾸면 안됨

	printf("\n");

	printf("%d\n", 10);		// 정수를 %f로 출력하면 형식 오류 -> 0.000000
	printf("%f\n", 10.5);	// 실수: 6째 자리까지 출력
	printf("%.1f\n", 10.5);	// 첫째 자리까지 출력

	printf("\n");

	printf("출석\t\t10%%\n");	// \t: 탭 문자
	printf("프로젝트\t10%%");

	return 0;
}