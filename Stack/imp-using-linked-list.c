// in linked list we insert & delete at the beginnig as it takes o(1) 
// than at the end which takes O(n)
// in linked list there is no stack overflow ://

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

// head is sexy but top is more cool & useful
struct node *top = NULL;

// to insert element in the beginning
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

// to remove element
void pop() {
	struct node *temp = top;
	if(temp == NULL) {
		printf("Stack Underflow\n");
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
