/*
0602-2023130887-윤형석-3
TV 종류: tube, lcd, plasma, projection
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	enum tvType {
		tube = 1, lcd, plasma, projection
	};

	enum tvType tv;

	while (1)
	{
		printf("TV 종류(코드): ");
		scanf("%d", &tv);
		if (tv == 0) {
			printf("프로그램 종료\n");
			break;
		}
		else if (tv == tube) {
			printf("브라운관 TV 선택!\n\n");
		}
		else if (tv == lcd) {
			printf("LCD TV 선택!\n\n");
		}
		else if (tv == plasma) {
			printf("PDP TV 선택!\n\n");
		}
		else if (tv == projection) {
			printf("프로젝션 TV 선택!\n\n");
		}
		else {
			printf("잘못 선택함!\n\n");
		}
	}

	return 0;
}