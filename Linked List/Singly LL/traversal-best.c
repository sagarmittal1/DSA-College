// To making & displaying nodes the correct way
// After so much of trial & error this is working

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head;


// to add elements function
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

// to print the linked list elements
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
	
	int n, i;
	printf("Enter the no. of nodes: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		int x;
		printf("Enter the data in node: ");
		scanf("%d", &x);
		
		createList(x);
		printList();
		printf("\n");
	}
	
	return 0;
}