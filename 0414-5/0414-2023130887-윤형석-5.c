/*
0414-2023130887-������-5
��� ���� �ڵ� �����ϱ�
������ ������
������ Ʋ���� ��� �ݺ��Ͽ� ������ ������
*/

#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	srand(time(NULL));
	int a, b, ans;

	printf("�� �ڸ� �� ����\n\n");

	while (1) {
		a = rand() % 100 + 1;
		b = rand() % 100 + 1;
		printf("%d + %d = ", a, b);
		scanf("%d", &ans);

		if (ans == a + b) {
			printf("�¾ҽ��ϴ�.\n\n");
			break;
		}
		else {
			printf("Ʋ�Ƚ��ϴ�. ������ %d\n\n", a + b);
		}
	}
}