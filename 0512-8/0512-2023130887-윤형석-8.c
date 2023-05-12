/*
0512-2023130887-������-8
���ȣ���� �̿��� ���� Ž��
*/

#pragma warning(disable:4996)
#include <stdio.h>

int BinarySearch(int values[], int left, int right, int key) {
	int ret = -1;
	int middle = 0;

	if (left <= right) {
		middle = (left + right) / 2;

		if (key < values[middle]) {
			ret = BinarySearch(values, left, middle - 1, key);
		}
		else if (key == values[middle]) {
			ret = middle;
		}
		else {
			ret = BinarySearch(values, middle + 1, right, key);
		}
	}
	return ret;
}

int main() {
	int list[] = { 15,20,25,35,45,55,60,75,85,90 };
	int searchNum, result;

	printf("ã�� ��: ");
	scanf("%d", &searchNum);

	result = BinarySearch(list, 0, 10, searchNum);
	printf("�ε���: %d", result);

	return 0;
}