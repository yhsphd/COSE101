/*
0609-2023130887-À±Çü¼®-7
linked list
*/

#pragma warning(disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct NODE {
	int data;
	struct NODE* link;
} NODE;

int main() {
	NODE* p1;
	NODE* p2;
	NODE* head;

	p1 = (NODE*)malloc(sizeof(NODE));
	p1->data = 10;
	p1->link = NULL;

	p2 = (NODE*)malloc(sizeof(NODE));
	p2->data = 20;
	p2->link = NULL;

	head = p1;
	p1->link = p2;

	while (head != NULL) {
		printf("%d ", head->data);
		head = head->link;
	}

	free(p1);
	free(p2);

	return 0;
}