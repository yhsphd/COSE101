/*
0609-2023130887-윤형석-6
malloc()과 free()
*/

#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int number;
	char title[100];
} Book;

int main() {
	Book* books = NULL;
	int i = 0;

	books = (Book*)malloc(2 * sizeof(Book));
	if (books == NULL) {
		printf("메모리 할당 오류\n");
		exit(1);
	}

	books->number = 1;
	strcpy(books->title, "C Programming");

	(books + 1)->number = 2;
	strcpy((books + 1)->title, "Data Structure");

	printf("%d %s \n", books->number, books->title);
	printf("%d %s \n", (books + 1)->number, (books + 1)->title);

	free(books);

	return 0;
}