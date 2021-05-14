#include <iostream>
using namespace std;

struct BstNode {
	int data;
	BstNode* left;
	BstNode* right;
};

BstNode* GetNewNode(int data){
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;
	
	return newNode;
}


BstNode* Insert(BstNode* root, int data) {
	if(root == NULL) {
		root = GetNewNode(data);
	}else if(data <= root->data) {
		root->left = Insert(root->left, data);
	}else{
		root->right = Insert(root->right, data);
	}
	return root;
}

int FindMin(BstNode* root) {
	// Never use root, make another pointer
	// ohh we can use root bcoz this is local & don't modify our main root
	if(root == NULL) {
		cout << "Tree is Empty";
		return -1;
	}
	BstNode* temp = root;
	while(temp->left != NULL) {
		temp = temp->left;
	}
	return temp->data;
}

int FindMax(BstNode* root) {
	if(root == NULL) {
		cout << "Tree is Empty";
		return -1;
	}
	BstNode* temp = root;
	while(temp->right != NULL) {
		temp = temp->right;
	}
	return temp->data;
}


bool Search(BstNode* root, int data) {
	if(root == NULL) return false;
	else if(root->data == data) return true;
	else if(data <= root->data) return Search(root->left, data);
	else return Search(root->right, data);
}


int main()
{
	BstNode * root = NULL;
	
	root = Insert(root, 15);
	root = Insert(root, 10);
	root = Insert(root, 20); 
	root = Insert(root, 25);
	root = Insert(root, 8);
	root = Insert(root, 12);
	
	int num;
	cout << "Enter the number to be searched:\n";
	cin >> num;
	
	if(Search(root, num)) {
		cout << "Found" << endl;
	}else{
		cout << "Not found" << endl;
	}

	cout << FindMin(root) << endl;
	cout << FindMax(root) << endl;
	
	return 0;	
}
