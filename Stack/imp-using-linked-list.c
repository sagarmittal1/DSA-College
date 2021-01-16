#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

struct node *top = NULL;

void push(int x) {
	struct node *temp = NULL;
	temp = (struct node *)(malloc(sizeof(struct node)));
	
	temp->data = x;
	temp->next = NULL;
	
	if(top == NULL) {
		top = temp;
	}else {
		temp->next = top;
		top = temp;	
	}
}

void pop() {
	struct node *temp = top;
	if(temp == NULL) {
		printf("Stack Underflow\n");
		return;
	}else {
		top = temp->next;
		free(temp);
	}
}

void peak() {
	printf("Top is %d\n", top->data);
}

void display() {
	struct node *temp = top;
	if(top == NULL) {
		printf("Stack Underflow");
		return;
	}else {
		while(temp != NULL) {
			printf("%d\t", temp->data);
			temp = temp->next;
		}
	}
	printf("\n");
}

int main() {
	push(1);
	push(2);
	push(3);
	pop();
	pop();
	pop();
	display();
	peak();
	
	return 0;
}
