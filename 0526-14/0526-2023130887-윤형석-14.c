/*
0526-2023130887-������-14
�̴� ���� ����
*/

#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main() {
	char dic[5][2][50] = {
		{"apple", "���"},
		{"banana", "�ٳ���"},
		{"cat", "�����"},
		{"computer", "��ǻ��"},
		{"dictionary", "����"}
	};

	char search[100];
	int i, flag;

	while (1) {
		flag = 0;
		printf("ã�� ���� �ܾ�: ");
		scanf("%s", search);

		if (strcmp(search, "q") == 0) {
			printf("���α׷� ����\n");
			break;
		}

		for (i = 0; i < 5; i++) {
			if (strcmp(dic[i][0], search) == 0) {
				printf("%s: %s\n\n", dic[i][0], dic[i][1]);
				flag = 1;
				break;
			}
		}
		if (!flag) {
			printf("������ ����!\n\n");
		}
	}

	return 0;
}