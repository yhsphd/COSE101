/*
0526-2023130887-������-16
����ü�� ����� ������ ����ü�� ��
�簢��: �غ�(����), ����(����), ���� ����
��: x, y�� ��ǥ�� ����
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int main() {
	struct point {
		int x;
		int y;
	};

	struct rect {
		struct point pos;
		int width;
		int height;
	};

	struct point leftTop;
	struct point rightBottom;
	struct rect rectangle;

	printf("���� ��� ��ǥ  : ");
	scanf("%d %d", &leftTop.x, &leftTop.y);
	printf("������ �ϴ� ��ǥ: ");
	scanf("%d %d", &rightBottom.x, &rightBottom.y);

	rectangle.pos = leftTop;
	rectangle.width = rightBottom.x - leftTop.x;
	rectangle.height = leftTop.y - rightBottom.y;

	printf("����: %d, �ѷ�: %d", rectangle.width * rectangle.height, 2 * (rectangle.width + rectangle.height));

	return 0;
}