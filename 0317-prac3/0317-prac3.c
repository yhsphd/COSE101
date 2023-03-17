// overflow

#include <stdio.h>

void main() {
	short year = 0;
	int sale = 0;
	long total_sale = 0;

	year = 1000;
	sale = 200000000;
	total_sale = year * sale;

	printf("total_sale = %ld\n", total_sale);
}