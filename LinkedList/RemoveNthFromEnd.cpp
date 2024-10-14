#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;

	ListNode(int data) {
		val = data;
		next = nullptr;
	}
};

void insertList(ListNode* &head, int data) {
	ListNode* newNode = new ListNode(data);

	if (head == nullptr) {
		head = newNode;
		return;
	}

	ListNode* temp = head;
	while (temp->next != nullptr) {
		temp = temp->next;
	}
	temp->next = newNode;
}

void displayList(ListNode* head) {
	ListNode* temp = head;

	while (temp != nullptr) {
		cout << temp->val << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

class solution {
public:
	ListNode* removeNthFromEnd(ListNode* head, int k) {
		ListNode* temp = head;

		int len = 0;
		while (temp != nullptr) {
			temp = temp->next;
			len++;
		}
		len -= k;

		if (!len) {
			return head->next;
		}

		temp = head;
		int ct = 1;
		while (ct < len and temp->next != nullptr) {
			temp = temp->next;
			ct++;
		}
		ListNode* delNode = temp->next;
		temp->next = temp->next->next;
		delete delNode;

		return head;
	}
};


int main() {
	int n;
	cin >> n;

	ListNode* list = nullptr;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;

		insertList(list, x);
	}
	displayList(list);

	//remove the k-th node from the end of the list
	int k;
	cin >> k;

	solution sol;
	ListNode* res = sol.removeNthFromEnd(list, k);
	displayList(res);


	return 0;
}
