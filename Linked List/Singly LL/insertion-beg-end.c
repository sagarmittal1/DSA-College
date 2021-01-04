// Program to insert at the beginning & at the end

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
	printf("Enter 1st value: ");
	scanf("%d", &one->data);
	
	printf("Enter 2nd value: ");
	scanf("%d", &two->data);
	
	printf("Enter 3rd value: ");
	scanf("%d", &three->data);
	
	// connecting nodes
	one->next = two;
	two->next = three;
	three->next = NULL;
	head = one;
	
	// printing nodes values
	printList(head);
	
	
	// To insert element at the beginning
	struct node *newnode;
	newnode = malloc(sizeof(struct node));
	
	printf("\nEnter the value to be inserted: ");
	scanf("%d", &newnode->data);
	newnode->next = head;
	head = newnode;
	
	printList(head);
	
	
	// code to insert at the end
	struct node *newnode, *temp;
	newnode = malloc(sizeof(struct node));
	
	printf("\nEnter the value to be inserted at the end: ");
	scanf("%d", &newnode->data);
	newnode->next = 0;
	
	temp = head;
	while(temp->next != 0){
		temp = temp->next;
	}
	temp->next = newnode;
	
	printList(head);
	
	return 0;
}