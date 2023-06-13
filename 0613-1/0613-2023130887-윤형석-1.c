/*
0613-2023130887-윤형석-1
(과제)
Singly linked list - Add at Head
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	int data;
	struct NODE* link;
} NODE;

int main(void) {
	NODE* first, * newnode, * head;
	int i;

	first = (NODE*)malloc(sizeof(NODE));
	first->data = 1;
	first->link = NULL;

	for (i = 2; i < 10; i++) {
		newnode = (NODE*)malloc(sizeof(NODE));
		newnode->data = i;
		newnode->link = first;
		first = newnode;
	}
	head = first;

	while (head != NULL) {
		printf("%d -> ", head->data);
		head = head->link;
	}
	printf("NULL");


	return 0;
}