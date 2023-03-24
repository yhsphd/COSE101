// ¿¬»êÀÚ

#include <stdio.h>

void main() {
	int x = 1;
	int y = 2;
	int z = 3;

	printf("%d\n", (1 > 0) ? y : z);
	printf("%d\n", x ? y : z);

	x = 0;
	printf("%d\n", x ? y : z);
}