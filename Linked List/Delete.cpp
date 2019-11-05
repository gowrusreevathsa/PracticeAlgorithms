#include<bits/stdc++.h>

using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void insertHead(Node** head, int n_data){
	Node* n_Node = new Node();
	
	n_Node->data = n_data;
	n_Node->next = (*head);
	
	(*head) = n_Node;
}

void insertAt(Node** head, int index, int n_data){
	
	if(*head == NULL || index == 0){
		insertHead(head, n_data);
		return;
	}
	
	Node* n_Node = new Node();
	n_Node->data = n_data;
	
	Node* temp = (*head);
	
	int count = 1;
	
	while(temp->next != NULL && count != index){
		++count;
		temp = temp->next;
	}
	
	if(temp->next == NULL){
		n_Node->next = NULL;
	}
	else{
		n_Node->next = temp->next;
	}
	temp->next = n_Node;
}

void deleteHead(Node** head){
	Node* temp = *head;
	*head = (*head)->next;
	
	delete temp;
}

void deleteIndex(Node** head, int ind){
	
	if(ind == 0){
		deleteHead(head);
		return;
	}
	
	int count = 1;
	Node* temp = *head;
	while(temp != NULL && count != ind){
		++count;
		temp = temp->next;
	}
	
	if(temp == NULL){
		cout << "Out of bounds\n";
	}
	else{
		Node* x = temp->next;
		temp->next = x->next;
		
		delete x;
	}
}

int main(){
	
	//Simple Linked List with three nodes
	
	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	Node* itr = head;
	
	insertHead(&head, 4);
	
	while(itr != NULL){
		cout << itr->data << " ";
		itr = itr->next;
	}
	cout << "\n";
	
	itr = head;
	insertAt(&head, 0, 5);
	
	while(itr != NULL){
		cout << itr->data << " ";
		itr = itr->next;
	}
	cout << "\n";
	
	itr = head;
	insertAt(&head, 9, 6);
	
	while(itr != NULL){
		cout << itr->data << " ";
		itr = itr->next;
	}
	cout << "\n";
	
	itr = head;
	insertAt(&head, 3, 7);
	
	while(itr != NULL){
		cout << itr->data << " ";
		itr = itr->next;
	}
	cout << "\n";
	
	cout << "=====Deletion=====\n";
	
	deleteHead(&head);
	itr = head;
	while(itr != NULL){
		cout << itr->data << " ";
		itr = itr->next;
	}
	cout << "\n";
	
	deleteIndex(&head, 2);
	itr = head;
	while(itr != NULL){
		cout << itr->data << " ";
		itr = itr->next;
	}
	cout << "\n";
	
	deleteIndex(&head, 10);
	itr = head;
	while(itr != NULL){
		cout << itr->data << " ";
		itr = itr->next;
	}
	cout << "\n";
	
	return 0;	
}
