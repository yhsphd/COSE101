#include <stdio.h>

#define ROW 4
#define COL 4

int main() {
	int data[ROW][COL] = {
		{1,1,2,4},
		{5,6,7,8},
		{3,2,1,0},
		{1,2,3,4}
	};

	int max[4];
	int temp;
	int i, j;

	temp = data[0][0];
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			if (temp < data[i][j]) {
				temp = data[i][j];
			}
		}
	}
	max[0] = temp;

	temp = data[0][2];
	for (i = 0; i < 2; i++) {
		for (j = 2; j < 4; j++) {
			if (temp < data[i][j]) {
				temp = data[i][j];
			}
		}
	}
	max[1] = temp;

	temp = data[2][0];
	for (i = 2; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			if (temp < data[i][j]) {
				temp = data[i][j];
			}
		}
	}
	max[2] = temp;

	temp = data[2][2];
	for (i = 2; i < 4; i++) {
		for (j = 2; j < 4; j++) {
			if (temp < data[i][j]) {
				temp = data[i][j];
			}
		}
	}
	max[3] = temp;

	for (i = 0; i < 4; i++) {
		printf("%d ", max[i]);
	}

	return 0;
}
