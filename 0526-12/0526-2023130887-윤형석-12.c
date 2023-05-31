/*
0526-2023130887-À±Çü¼®-12
sscanf(), sprintf()
*/

#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	char s1[] = "100";
	char s2[] = "12.93";
	char buffer[100];

	int num1;
	float num2, result;

	sscanf(s1, "%d", &num1);
	sscanf(s2, "%f", &num2);

	printf("num1 = %d\n", num1);
	printf("num2 = %.2f\n", num2);

	result = num1 + num2;

	sprintf(buffer, "%.2f", result);

	printf("µ¡¼À °á°ú: %s\n", buffer);

	return 0;
}