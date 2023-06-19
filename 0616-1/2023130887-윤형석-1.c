#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* link;
} node;

int main() {
	int List_1[] = { 0,2,4,6,8 };
	int List_2[] = { 1,3,5,7,9 };
	node* head = (node*)malloc(sizeof(node));
	int i;

	node* first;
	first = head;

	for (i = 0; i < 10; i++) {
		node* newnode = (node*)malloc(sizeof(node));
		if (i % 2 == 0) {
			newnode->data = List_1[i / 2];
		}
		else {
			newnode->data = List_2[i / 2];
		}
		newnode->link = head;
		head = newnode;
	}

	while (head != NULL) {
		printf("%d ", head->data);
		head = head->link;
	}
	printf("NULL");

	return 0;
}