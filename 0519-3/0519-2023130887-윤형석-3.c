/*
0519-2023130887-������-3
�Լ��� �μ��� �迭�� �Ѱ��ִ� ���α׷�
5���� ���� �Է¹޾� �迭�� �����ϰ�, �Լ����� �� ������ ����� ����
�Է°� ����� main()����, ��� ����� ����� ���� �Լ����� ��
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

	printf("���� %d���� �Է��Ͻÿ�: ", SIZE);

	for (i = 0; i < SIZE; i++) {
		scanf(" %d", num + i);
	}

	printf("������ ���: %lf", calcAvg(num, SIZE));

	return 0;
}