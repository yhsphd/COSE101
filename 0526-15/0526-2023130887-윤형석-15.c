/*
0526-2023130887-������-15
����ü�� �̿��� �� ���� �Ÿ� ���ϱ�
��: x, y�� ��ǥ�� ����
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

	printf("��1�� ��ǥ(x y): ");
	scanf("%lf %lf", &a.x, &a.y);
	printf("��2�� ��ǥ(x y): ");
	scanf("%lf %lf", &b.x, &b.y);

	answer = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));

	printf("�� �� ������ �Ÿ�: %.2lf", answer);

	return 0;
}