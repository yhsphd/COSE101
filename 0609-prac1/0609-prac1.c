/*
�⸻��� �������ɼ� 3272385273
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	char filePath[100];
	FILE* fp = NULL;

	typedef struct {
		int id;
		char name[100];
		double score;
	} student;
	student students[100];

	int i;

	printf("��� ���ϸ�: ");
	scanf("%s", filePath);

	if ((fp = fopen(fp, "w")) == NULL) {
		printf("��� ���� �б� ����!\n");
		exit(1);
	}

	printf("\n");


	for (i = 0;; i++) {
		printf("[�����̸� ����]\n");
		printf("��ȣ: ");
		scanf("%d", &students[i].id);

		if (students[i].id < 0) {
			break;
		}

		sprintf(fp, "\n", num1, num2, num3);

		avg = (num1 + num2 + num3) / 3;

		fprintf(fp_out, "���: %.2lf\n", avg);
		printf("���: %.2lf\n", avg);
	}

	fclose(fp);

	return 0;
}