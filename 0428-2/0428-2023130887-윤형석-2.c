/*
0428-2023130887-������-2
�迭 �� ���Ҹ� ���� Ž���ϴ� ���α׷�
*/

#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	int i;
	int num;

	printf("Ž���� ����?: ");
	scanf("%d", &num);
	
	printf("\n");

	for (i = 0; i < sizeof(data) / sizeof(data[0]); i++) {
		if (data[i] == num) {
			printf("Ž�� ����!\n");
			printf("�ε��� = %d, �� = %d\n", i, data[i]);
			break;
		}
	}

	printf("\n");

	printf("Ž���� ������");

	return 0;
}
