/*
0519-2023130887-윤형석-3
함수의 인수로 배열을 넘겨주는 프로그램
5개의 값을 입력받아 배열에 저장하고, 함수에서 이 값들의 평균을 구함
입력과 출력은 main()에서, 평균 계산은 사용자 정의 함수에서 함
*/

#pragma warning(disable:4996)
#include <stdio.h>

#define SIZE 5

double calcAvg(int *num, int size) {
	int i;
	float ans = 0;
	for (i = 0; i < size; i++) {
		ans += *(num + i);
	}
	ans /= (float)size;

	return ans;
}

int main(void) {
	int num[SIZE];
	int i;

	printf("정수 %d개를 입력하시오: ", SIZE);

	for (i = 0; i < SIZE; i++) {
		scanf(" %d", num + i);
	}

	printf("값들의 평균: %lf", calcAvg(num, SIZE));

	return 0;
}