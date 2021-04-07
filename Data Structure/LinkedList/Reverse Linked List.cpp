#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/reverse-a-linked-list/
struct Node {
	int data;
	struct Node *next;
};

struct Node *head = NULL;
void insert(int new_data) {
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->next = head;
	head = new_node;
}

void display() {
	struct Node *ptr;
	ptr = head;
	while (ptr != NULL) {
		cout<<ptr->data<<" ";
		ptr = ptr->next;
	}
}

void reverse() {
	Node *current = head;
	Node *prev = NULL, *next = NULL;
	
	while  (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

int main() {
	insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   cout<<"\n";
   cout<<"The Reverse Linked List is: ";
   reverse();
   display();
   return 0;
}
