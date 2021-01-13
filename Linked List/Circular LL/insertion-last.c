// To insert at last & displaying it
// in circular linked list

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head;

void insert(int x){
	struct node *temp = NULL;
	struct node *p = NULL;
	temp = (struct node *)(malloc(sizeof(struct node)));
	
	temp->data = x;
	temp->next = NULL;
	
	if(head == NULL){
		head = temp;
		temp->next = head;  // must remember this
	}else{
		p = head;
		while(p->next != head){
			p = p->next;
		}
		p->next = temp;
		temp->next = head;
	}
	
}

void print(){
	struct node *temp = head;
	if(head == NULL){
		printf("List is Empty :)\n");
	}else{
		while(temp->next != head){
			printf("%d\t", temp->data);
			temp = temp->next;
		}
		printf("%d\t", temp->data);
	}
}


int main()
{
	head = NULL;
	
	insert(50);
	insert(34);
	insert(43);
	print();
	
	return 0;
}