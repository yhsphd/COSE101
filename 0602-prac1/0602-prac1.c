#include <stdio.h>

int main() {
	enum levels { low, medium, high };

	enum levels english;

	printf("%d\n", sizeof(english));
}