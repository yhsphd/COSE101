/*
switch - case ��
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int num;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);

	switch (num) {
	case 1:
		printf("��");
		break;
	case 2:
		printf("��");
		break;
	case 3:
		printf("��");
		break;
	default:
		printf("��Ÿ");
		break;
	}
}