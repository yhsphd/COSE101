/*
0428-2023130887-윤형석-3
이진 탐색
*/

#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int data[] = { 15,20,25,35,45,55,60,75,85,90 };
	int key;
	int left = 0, right = sizeof(data) / sizeof(data[0]), middle = 0, result = -1;

	printf("탐색할 값은?: ");
	scanf("%d", &key);

	printf("\n");

	while (left <= right) {
		middle = (left + right) / 2;
		printf("left = %d,\tmiddle = %d,\tright = %d\n", left, right, middle);

		if (key < data[middle]) {
			right = middle - 1;
		}
		else if (key > data[middle]) {
			left = middle + 1;
		}
		else {
			result = middle;
			break;
		}
	}

	printf("\n");

	if (result == -1) {
		printf("찾는 값 없음");
	}
	else {
		printf("인덱스 = %d", result);
	}

	return 0;
}
