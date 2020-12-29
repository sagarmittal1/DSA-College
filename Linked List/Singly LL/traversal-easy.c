// Printing 3 node values taken at compile time

#include <stdio.h>
#include <stdlib.h>

// making a nodes templatae
struct node{
	int data;
	struct node *next;
};

// function to print the node values
void printList(struct node *p){
	while(p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
}

int main()
{
	struct node *head;
	struct node *one = NULL;
	struct node *two = NULL;
	struct node *three = NULL;
	
	// Taking memory for node
	one = malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));
	three = malloc(sizeof(struct node));
	
	// Giving values to node
	one->data = 1;
	two->data = 2;
	three->data = 3;
	
	// connecting nodes
	one->next = two;
	two->next = three;
	three->next = NULL;
	head = one;
	
	// printing nodes values
	printList(head);
	
	return 0;
}