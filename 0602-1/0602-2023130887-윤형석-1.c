/*
0602-2023130887-������-1
����ü typedef
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	typedef struct {
		int x;
		int y;
	} PT;

	PT points[3];

	printf("�� A ��ǥ: ");
	scanf("%d %d", &points[0].x, &points[0].y);

	printf("�� B ��ǥ: ");
	scanf("%d %d", &points[1].x, &points[1].y);

	points[2].x = points[0].x + points[1].x;
	points[2].y = points[0].y + points[1].y;

	printf("���ο� ���� ��ǥ: (%d, %d)\n", points[2].x, points[2].y);

	return 0;
}