/*
0407-2023130887-������-6
while ���� �̿��Ͽ� N���� M������ ���� ����ϴ� ���α׷�
N(���� ��), M(�� ��)�� ���� �Է¹���
�� ���� ���� ������ ���� ���, ���� ���Է¹���
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int sum = 0;
	int N, M;
	int i;

	while (1) {
		printf("���� ��, �� �� �Է�: ");
		scanf("%d %d", &N, &M);
		printf("\n");

		if (N > M) {
			printf("���� ���� �� ������ ŭ!\n�ٽ� �Է��ϼ���.\n\n");
			continue;
		}

		i = N;

		while (i <= M) {
			sum += i;
			i++;
		}

		printf("%d���� %d������ ��: %d", N, M, sum);
		break;
	}
}