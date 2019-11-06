#include<bits/stdc++.h>

using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;
};

node* newNode(int data){
	node* n = new node();
	
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	
	return n;
}

void inorder(node* n){
	
	if(n == NULL)
		return;
		
	inorder(n->left);
	cout << n->data << " ";
	inorder(n->right);
}

void preorder(node* n){
	
	if(n == NULL)
		return;
		
	cout << n->data << " ";
	preorder(n->left);
	preorder(n->right);
}

void postorder(node* n){
	
	if(n == NULL)
		return;
		
	postorder(n->left);
	postorder(n->right);
	cout << n->data << " ";
}

int main(){
	
	node* root = newNode(1);
	
	root->left = newNode(2);
	root->right = newNode(3);
	
	node* temp = root->left;
	temp->left = newNode(4);
	temp->right = newNode(5);
	
	//traversal
	cout << "\n\n======Inorder======\n";	
	inorder(root);
	
	cout << "\n\n======Preorder======\n";
	preorder(root);
	
	cout << "\n\n======Postorder======\n";
	postorder(root);
	
	return 0;
}
