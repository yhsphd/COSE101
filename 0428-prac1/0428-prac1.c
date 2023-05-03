/*
문자열
*/

#include <stdio.h>

void main() {
	char str1[] = "Hello";
	char str2[10] = { 'H', 'e', 'l', 'l', 'o' , '\0'};
	char str3[10] = { 'H', 'e', 'l', 'l', 'o' };
	char str4[10] = { "Hello" };
	//char str4[10] = { "Hello", "World" };		//오류

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);


	return 0;
}