#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	int num;
	int len = 1;
	int cnt = 1;

	scanf("%d", &num);

	for (;;) {
		if (num / len == 0) {
			len /= 10;
			break;
		}
		len *= 10;
	}

	for (;;) {
		if (len == cnt || len < cnt) {
			printf("ȸ����");
			break;
		}
		else if ((num / len) % 10 != (num / cnt) % 10) {
			printf("ȸ�� �ƴ�");
			break;
		}
		len /= 10;
		cnt *= 10;
	}

	return 0;
}