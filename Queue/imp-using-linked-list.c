// Implemantion of Queue using Linked List
// by using rear we can achieve O(1) in both insertion & deletion

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void Enqueue(int x) {
	struct node *temp = NULL;
	temp = (struct node *)(malloc(sizeof(struct node)));
	temp->data = x;
	temp->next = NULL;
	
	if(front == NULL && rear == NULL) {
		front = rear = temp;
	}else{
		rear->next = temp;
		rear = temp;
	}
}

void Dequeue() {
	struct node *temp = front;
	if(front == NULL) {
        printf("Queue is Empty");
		return;
	}else if(front == rear) {
		front = rear = NULL;
	}else {
		front = front->next;
	}
	free(temp);
}

void display() {
	struct node *temp = front;
	
	if(front == NULL) {
        printf("Queue is Empty");
		return;
	}else{
		while(temp != NULL) {
			printf("%d\t", temp->data);
			temp = temp->next;
		}
	}
}
 
void frontPrint() {
	printf("\nFront is %d", front->data);
} 


int main()
{
	Enqueue(1);
	Enqueue(2);
	Enqueue(3);
	Enqueue(1);
	Dequeue();

	display();  // 2 3 1
	frontPrint();

    return 0;
}