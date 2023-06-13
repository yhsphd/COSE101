/*
기말고사 출제가능성 3272385273
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

	printf("출력 파일명: ");
	scanf("%s", filePath);

	if ((fp = fopen(fp, "w")) == NULL) {
		printf("출력 파일 읽기 실패!\n");
		exit(1);
	}

	printf("\n");


	for (i = 0;; i++) {
		printf("[음수이면 종료]\n");
		printf("번호: ");
		scanf("%d", &students[i].id);

		if (students[i].id < 0) {
			break;
		}

		sprintf(fp, "\n", num1, num2, num3);

		avg = (num1 + num2 + num3) / 3;

		fprintf(fp_out, "평균: %.2lf\n", avg);
		printf("평균: %.2lf\n", avg);
	}

	fclose(fp);

	return 0;
}