/*
0526-2023130887-윤형석-15
구조체를 이용한 두 점의 거리 구하기
점: x, y의 좌표를 가짐
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int main() {
	struct point {
		double x;
		double y;
	};

	struct point a, b;
	double answer;

	printf("점1의 좌표(x y): ");
	scanf("%lf %lf", &a.x, &a.y);
	printf("점2의 좌표(x y): ");
	scanf("%lf %lf", &b.x, &b.y);

	answer = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));

	printf("두 점 사이의 거리: %.2lf", answer);

	return 0;
}