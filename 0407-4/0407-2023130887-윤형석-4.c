/*
0407-2023130887-������-4
goto ������ ������ ���
*/

#pragma warning(disable: 4996)
#include <stdio.h>

void main() {
	int i = 1;

loop:
	printf("%d * %d = %d\n", 3, i, 3 * i);
	i++;
	if (i > 9) {
		goto end;
	}
	else {
		goto loop;
	}

end:
	return;
}