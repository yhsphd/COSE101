/*
0324-2023130887-������-2
�̴ϼ�, Ÿ��, ���̸� �Է¹޾� ����ϴ� ���α׷�
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	char name;
	float rate;
	int age;

	printf("�̴ϼ��� �Է��ϼ���: ");
	scanf("%c", &name);
	printf("Ÿ���� �Է��ϼ���: ");
	scanf("%f", &rate);
	printf("���̸� �Է��ϼ���: ");
	scanf("%d", &age);

	printf("\n");

	printf("*** ���� %c ***\n", name);
	printf("Ÿ��: %.3f\n", rate);
	printf("����: %d��\n", age);
}