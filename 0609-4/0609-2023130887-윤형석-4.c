/*
0609-2023130887-������-4
���Ͽ��� �� �Ǽ����� �ݺ������� �Է¹޾� ����� ���ϰ� ����� ���Ͽ� ������
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	FILE* fp_in = NULL;
	FILE* fp_out = NULL;
	double num1, num2, num3;
	double avg;

	if ((fp_in = fopen("D:\\input.txt", "r")) == NULL) {
		printf("�Է� ���� �б� ����!\n");
		exit(1);
	}
	if ((fp_out = fopen("D:\\output.txt", "w")) == NULL) {
		printf("��� ���� �б� ����!\n");
		exit(1);
	}

	while (!feof(fp_in)) {
		fscanf(fp_in, "%lf %lf %lf", &num1, &num2, &num3);
		printf("�Է°�: %.2f %.2f %.2f\n", num1, num2, num3);

		avg = (num1 + num2 + num3) / 3;

		fprintf(fp_out, "���: %.2lf\n", avg);
		printf("���: %.2lf\n", avg);
	}

	fclose(fp_in);
	fclose(fp_out);

	return 0;
}