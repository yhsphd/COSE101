/*
0310-2023130887-������
*/

#include <stdio.h>

int main(void) {
	printf("2023130887\n������\n");

	printf("\n");

	printf("%d\n", 10);
	printf("%d\n", 10 + 20);
	printf("%d %d\n", 10, 20);
	printf("����ö�� %d\n", 999);

	printf("\n");

	printf("a\n");			// ���ڿ�
	printf("%c\n", 'a');	// ����(')
	printf("%s\n", "a");	// ���ڿ�(")	���Ʒ� �ٲٸ� �ȵ�

	printf("\n");

	printf("%d\n", 10);		// ������ %f�� ����ϸ� ���� ���� -> 0.000000
	printf("%f\n", 10.5);	// �Ǽ�: 6° �ڸ����� ���
	printf("%.1f\n", 10.5);	// ù° �ڸ����� ���

	printf("\n");

	printf("�⼮\t\t10%%\n");	// \t: �� ����
	printf("������Ʈ\t10%%");

	return 0;
}