#include <iostream>
using namespace std;
typedef struct Node *node;
struct Node {
	int data;
	Node *next;
};
node createNode() {
	node temp;
	temp = (node) malloc(sizeof(struct Node));
	
	temp->next = NULL;
	return temp;
}

node addNode(node head, int value) {
	node temp, p;
	temp = createNode();
	
	temp->data = value;
	if (head == NULL) {
		head = temp;
	} else {
		p = head;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = temp;
	}
	return head;
}
main () {
	
}
