/*
0526-2023130887-윤형석-16
구조체를 멤버로 가지는 구조체의 예
사각형: 밑변(가로), 높이(세로), 점을 가짐
점: x, y의 좌표를 가짐
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

	printf("왼쪽 상단 좌표  : ");
	scanf("%d %d", &leftTop.x, &leftTop.y);
	printf("오른쪽 하단 좌표: ");
	scanf("%d %d", &rightBottom.x, &rightBottom.y);

	rectangle.pos = leftTop;
	rectangle.width = rightBottom.x - leftTop.x;
	rectangle.height = leftTop.y - rightBottom.y;

	printf("면적: %d, 둘레: %d", rectangle.width * rectangle.height, 2 * (rectangle.width + rectangle.height));

	return 0;
}