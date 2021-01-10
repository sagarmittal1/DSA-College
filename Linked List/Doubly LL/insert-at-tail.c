// program to insert at tail & printing it in forward as well as reversed
// function use all are here for doubly linked list

#include <stdio.h>
#include <stdlib.h>

// Adding extra prev to doubly linked list
struct node {
	int data;
	struct node *prev;
	struct node *next;
};

struct node *head;

struct node* newNode(int x){
	struct node *temp = NULL;
	temp = (struct node *)(malloc(sizeof(struct node)));  
	// to be allocated in heap bcoz it will remain until we give the command to free
	
	temp->data = x;
	temp->prev = NULL;
	temp->next = NULL;
	
	return temp;
}

// to insert at head function
void insertAtHead(int x){
	struct node *temp = newNode(x);
	
	if(head == NULL){
		head = temp;
		return;
	}
	
	head->prev = temp;
	temp->next = head;
	head = temp;
	
}

// to insert at tail function
void insertAtTail(int x){
	struct node *temp = newNode(x);
	struct node *p = head;
	
	if(head == NULL){
		head = temp;
		return;
	}
	
	while(p->next != NULL){
		p = p->next;
	}
	p->next = temp;
	temp->prev = p;
	
}

// to print the elements in forward
void print(){
	struct node *temp = head;
	printf("Forward: \n");
	while(temp != NULL){
		printf("%d\t", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

// to print the element in reverse direction
void reversePrint(){
	struct node *temp = head;
	if(temp == NULL){
		return;
	}
	
	while(temp->next != NULL){
		temp = temp->next;
	}
	
	printf("Reverse: \n");
	while(temp != NULL){
		printf("%d\t", temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

int main()
{
	head = NULL;
	
	insertAtTail(2);
	insertAtTail(1);
	insertAtTail(3);
	insertAtTail(4);
	print(); // 4 3 1 2
	reversePrint(); // 2 1 3 4 
	
	return 0;
}