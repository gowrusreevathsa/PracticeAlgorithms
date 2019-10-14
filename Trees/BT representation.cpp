#include <bits/stdc++.h>

using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data){
	
	struct node* n = (struct node*) malloc(sizeof(struct node));
	
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	
	return n;
}

int main(){
	ios_base::sync_with_stdio(false);
	
	struct node* root = newNode(1);
	
	root->left = newNode(2);
	root->right = newNode(3);
	
//		1
//	2		3



	struct node* t = root->left;
	t->left = newNode(4);
	t->right = newNode(5);
	
//				1
//		2				3
//	4		5
	
	
	
	
	t = root->right;
	t->left = newNode(6);
	t->right = newNode(7);
	
	
//				1
//		2				3
//	4		5		6		7
	return 0;
}

