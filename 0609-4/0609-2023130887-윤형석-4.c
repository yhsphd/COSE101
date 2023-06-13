/*
0609-2023130887-윤형석-4
파일에서 세 실수값을 반복적으로 입력받아 평균을 구하고 결과를 파일에 저장함
*/

#pragma warning(disable: 4996)
#include <stdio.h>

int main() {
	FILE* fp_in = NULL;
	FILE* fp_out = NULL;
	double num1, num2, num3;
	double avg;

	if ((fp_in = fopen("D:\\input.txt", "r")) == NULL) {
		printf("입력 파일 읽기 실패!\n");
		exit(1);
	}
	if ((fp_out = fopen("D:\\output.txt", "w")) == NULL) {
		printf("출력 파일 읽기 실패!\n");
		exit(1);
	}

	while (!feof(fp_in)) {
		fscanf(fp_in, "%lf %lf %lf", &num1, &num2, &num3);
		printf("입력값: %.2f %.2f %.2f\n", num1, num2, num3);

		avg = (num1 + num2 + num3) / 3;

		fprintf(fp_out, "평균: %.2lf\n", avg);
		printf("평균: %.2lf\n", avg);
	}

	fclose(fp_in);
	fclose(fp_out);

	return 0;
}