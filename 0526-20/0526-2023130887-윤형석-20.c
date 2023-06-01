/*
0526-2023130887-������-20
�� �� �ٲٱ�
�� ���ڸ� ����� ���� ����ü num��
�� ���ڸ� ��ȯ�ϴ� �Լ� exchange�� �̿���
main()���� �����, �Լ����� �� ���� ��ȯ��
1. ����ü�� �Լ��� �μ��� ������
2. ����ü�� �ּҸ� �Լ��� �μ��� ������
*/

#pragma warning(disable:4996)
#include <stdio.h>

struct num {
	int a;
	int b;
};

struct num exchange1(struct num n) {
	struct num nToReturn = { n.b,n.a };
	return nToReturn;
}

void exchange2(struct num* n) {
	int temp = n->a;
	n->a = n->b;
	n->b = temp;
}

int main() {
	struct num num_orig;
	struct num num_test;

	printf("�� �� �Է�: ");
	scanf("%d %d", &num_orig.a, &num_orig.b);

	num_test = num_orig;
	num_test = exchange1(num_test);
	printf("���: %d %d\n", num_test.a, num_test.b);

	num_test = num_orig;
	exchange2(&num_test);
	printf("���: %d %d\n", num_test.a, num_test.b);

	return 0;
}