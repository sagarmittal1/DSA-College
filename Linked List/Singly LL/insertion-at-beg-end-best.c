// To insert the nodes at end or front & displaying it
// mycodeshool is best. AND i still love Anshika ;)

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

// Remember to make it as global as we use it in functions
struct node *head;

// function to insert node at last
void createList(int x){
	struct node *temp = NULL;
	struct node *p = NULL;
	
	temp = (struct node *)(malloc(sizeof(struct node)));
	temp->data = x;
	temp->next = NULL;
	
	if(head == NULL){
		head = temp;
	}else{
		p = head;
		while(p->next != NULL){
			p = p->next;
		}
		p->next = temp;
	}
}

// function to insert node at beginning
void insertFront(int x){
	struct node *temp = NULL;
	temp = (struct node *)(malloc(sizeof(struct node)));
	
	temp->data = x;
	temp->next = NULL;
	
	if(head == NULL){
		head = temp;
	}else{
		temp->next = head;
		head = temp;
	}
}

// Function to print list
void printList(){
	struct node *temp = NULL;
	temp = head;
	while(temp != NULL){
		printf("%d\t", temp->data);
		temp = temp->next;
	}
}

int main()
{
	head = NULL;
	
	// Calling functions as required
	createList(5);
	createList(6);
	createList(7);
	insertFront(4);
	printList();
	
	return 0;
}