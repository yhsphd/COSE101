/*
0602-2023130887-������-3
TV ����: tube, lcd, plasma, projection
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	enum tvType {
		tube = 1, lcd, plasma, projection
	};

	enum tvType tv;

	while (1)
	{
		printf("TV ����(�ڵ�): ");
		scanf("%d", &tv);
		if (tv == 0) {
			printf("���α׷� ����\n");
			break;
		}
		else if (tv == tube) {
			printf("����� TV ����!\n\n");
		}
		else if (tv == lcd) {
			printf("LCD TV ����!\n\n");
		}
		else if (tv == plasma) {
			printf("PDP TV ����!\n\n");
		}
		else if (tv == projection) {
			printf("�������� TV ����!\n\n");
		}
		else {
			printf("�߸� ������!\n\n");
		}
	}

	return 0;
}