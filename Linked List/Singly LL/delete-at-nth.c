// program to delete element at nth position ;)

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head;

void insert(int x);
void print();
void deleteList(int n);

int main()
{
	insert(1);
	insert(2);
	insert(3);
	insert(69);
	print(); // 1 2 3
	
	int n;
	printf("\nEnter the position to remove\n");
	scanf("%d", &n);
	deleteList(n);
	print();
	
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

// function to print
void print(){
	struct node *temp = NULL;
	temp = head;
	while(temp != NULL){
		printf("%d\t", temp->data);
		temp = temp->next;
	}
}

// function to delete element at nth position
void deleteList(int n){
	struct node *temp1 = head;
	
	if(n == 1){
		head =  temp1->next;
		free(temp1);
		return;
	}
	
	int i;
	for(i = 0; i < n-2; i++){
		temp1 = temp1->next;
	}
	
	struct node *temp2 = temp1->next;
	temp1->next = temp2->next;
	free(temp2);
}