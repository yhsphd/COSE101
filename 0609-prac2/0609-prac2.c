#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

int main() {
	char* chr = NULL;
	int i = 0;

	chr = (char*)malloc(100 * sizeof(char));

	if (chr == NULL) {
		printf("메모리 할당 오류\n");
		exit(1);
	}

	for (i = 0; i < 7; i++) {
		*(chr + i) = 'a' + i;
	}
	*(chr + i) = '\0';

	printf("%s", chr);

	free(chr);


	return 0;
}