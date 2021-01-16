#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  //library for using bool in C language
#define SIZE 50

int a[SIZE];
int top = -1;

// function to push element to stack
void push(int x) {
	if(top == SIZE-1) {
		printf("Stack Overflow\n");
		return;
	}else{
		top++;
		a[top] = x;
	}
}

// function to remove element
void pop() {
	if(top == -1) {
		printf("Stack Underflow\n");
		return;
	}else{
		top--;
	}
}

// to display
void display() {
	int i;
	for(i = 0; i <= top; i++){
		printf("%d ", a[i]);
	}
	printf("\n");
}

// to print the top element
void peak() {
	 printf("%d\n", a[top]);
}

bool isEmpty() {
	if(top == -1) {
		return true;
	}else{
		return false;
	}
}

int main()
{
	push(1);
	push(2);
	push(3);
	pop();
	push(1);
	pop();
	display();
	peak();

    return 0;
}