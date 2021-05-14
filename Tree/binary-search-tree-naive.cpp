#include <iostream>
using namespace std;

struct node {
	int data;
	struct node* left;
	struct node* right;
};

struct node *newNode(int data) {
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

struct node *insert(struct node *root, int data) {
	if(root == NULL) {
		return newNode(data);
	}
	if(data <= root->data) {
		root->left = insert(root->left, data);
	}else{
		root->right = insert(root->right, data);
	}
	return root;
}

bool search(struct node *root, int data) {
	if(root == NULL) return false;
	else if(root->data = data) return true;
	else if(root->data <= data) return search(
}

int main() 
{
	struct node *root = NULL;
	root = insert(root, 8);
	root = insert(root, 5);
	root = insert(root, 7);
	root = insert(root, 9);
	root = insert(root, 89);
	
}