/*
0414-2023130887-������-3
�ҹ��� �Է� �� �빮�ڷ� ��ȯ�Ͽ� ��� (Q �Է� �� ������)
�ݺ���, break, continue �̿��ϱ�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	char chr;

	for (;;) {
		printf("�ҹ��� �Է� (����:Q): ");

		scanf(" %c", &chr);

		/*
		* scanf("%c", &chr);
		* getchar();
		*/

		/*
		* chr = getchar();
		*/

		if (chr == 'Q') {
			break;
		}
		else if (chr < 'a' || chr > 'z') {
			continue;
		}

		printf("��ȯ�� �빮�ڴ� %c�Դϴ�.\n\n", chr - 32);
	}
}