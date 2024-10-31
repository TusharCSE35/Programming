#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;

	Node(int val) {
		data = val;
		next = NULL;
	}
};

void insertList(Node* &head, int val) {
	Node* newNode = new Node(val);

	if (head == NULL) {
		head = newNode;
		return;
	}

	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
}

void displayList(Node* head) {
	Node* temp = head;

	while (temp != NULL) {
		cout << temp->data << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

Node* reverseRecursive(Node* head) {
	if (head == NULL or head->next == NULL) {
		return head;
	}

	Node* newHead = reverseRecursive(head->next);

	head->next->next = head;
	head->next = NULL;

	return newHead;
}


int main() {
	int n;
	cin >> n;

	Node* list = NULL;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;

		insertList(list, x);
	}
	displayList(list);

	Node* rList = reverseRecursive(list);
	displayList(rList);

	return 0;
}
