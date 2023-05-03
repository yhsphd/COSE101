/*
0428-2023130887-윤형석-2
배열 내 원소를 순차 탐색하는 프로그램
*/

#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	int i;
	int num;

	printf("탐색할 값은?: ");
	scanf("%d", &num);
	
	printf("\n");

	for (i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
		if (data[i] == num) {
			printf("탐색 성공!\n");
			printf("인덱스 = %d, 값 = %d\n", i, data[i]);
			break;
		}
	}

	printf("\n");

	printf("탐색을 종료함");

	return 0;
}
