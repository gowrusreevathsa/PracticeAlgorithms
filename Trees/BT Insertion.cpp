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

void inorder(struct node* root){
	if(!root)
		return;
		
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void insert(struct node* root, int data){
	
	queue<struct node*> q;
	q.push(root);
	
	struct node* temp;
	
	while(!q.empty()){
		temp = q.front();
		q.pop();
		
		if(!temp->left){
			temp->left = newNode(data);
			break;
		}	
		else{
			q.push(temp->left);
		}
		
		if(!temp->right){
			temp->right = newNode(data);
			break;
		}
		else{
			q.push(temp->right);
		}
	}
	
}

int main(){
	ios_base::sync_with_stdio(false);
	
	struct node* root = newNode(1);
	
	root->left = newNode(2);
	root->right = newNode(3);
	
	struct node* t = root->left;
	
	t->left = newNode(6);
	
	t = root->right;
	t->left = newNode(7);
	
	
	//before insertion
	inorder(root);
	cout << endl;
	
	//insertion
	insert(root, 8);
	inorder(root);
	cout << endl;
	
	insert(root, 9);
	inorder(root);
	
	return 0;
}

