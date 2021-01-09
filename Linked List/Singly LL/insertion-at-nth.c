// Program to insert at nth position
// I use simple calling function but asking value to user can also be done

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *head;

// function at insert at nth position
void insert(int data, int n){
	struct node *temp1 = NULL;
	temp1 = (struct node *)(malloc(sizeof(struct node)));
	
	temp1->data = data;
	temp1->next = NULL;
	
	// to insert at the beginning
	if(n == 1){
		temp1->next = head;
		head = temp1;
		return;
	}
	struct node *temp2 = head;
	int i;
	for(i = 0; i < n-2; i++){
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}

// to print the value
int printList(){
	struct node *temp = head;
	while(temp != NULL){
		printf("%d\t", temp->data);
		temp = temp->next;
	}
}

int main()
{
	head = NULL;
	
	insert(4, 1); // 4
	insert(6, 2); // 4 6
	insert(5, 1); // 5 4 6
	insert(7, 4); // 5 4 6 7
	
	printList();
	
	return 0;
}