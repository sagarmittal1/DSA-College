// to print linked list using recursion 
// Also printing reversed linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head;

void insert(int x);
void print(struct node *p);
void reversePrint(struct node *p);

int main()
{
	head = NULL;
	
	insert(1);
	insert(2);
	insert(3);
	insert(69);
	
	print(head); // 1 2 3 69
	reversePrint(head); // 69 3 2 1
	
	return 0;
}

// function to insert element to end
void insert(int x){
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

// function to print using recursion
void print(struct node *p){
	if(p == NULL){
		printf("\n");
		return;
	}
	printf("%d\t", p->data);
	print(p->next);
}

// function to print reversed linked list using recursion
void reversePrint(struct node *p){
	if(p == NULL){
		return;
	}
	reversePrint(p->next);
	printf("%d\t", p->data);
}
