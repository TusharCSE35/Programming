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

class solution {
public:
	ListNode* reverseKGroup(ListNode* head, int k) {
		ListNode* check = head;

		int count = 0;
		while (check != nullptr and count < k) {
			check = check->next;
			count++;
		}
		if (count < k)return head;

		count = 0;
		ListNode* previous = nullptr;
		ListNode* current = head;
		ListNode*nextptr;

		count = 0;
		while (current != nullptr and count < k) {
			nextptr = current->next;
			current->next = previous;

			previous = current;
			current = nextptr;

			count++;
		}

		if (current != nullptr) {
			head->next = reverseKGroup(current, k);
		}

		return previous;
	}
};

void displayList(ListNode* head) {
	ListNode* temp = head;

	while (temp != nullptr) {
		cout << temp->val << " -> ";
		temp = temp->next;
	}
	cout << "NULL" << endl;
}

int main() {
	int n, k;
	cin >> n >> k;

	ListNode* list = nullptr;
	for (int i = 1; i <= n; i++) {
		int x;
		cin >> x;

		insertList(list, x);
	}
	displayList(list);


	solution sol;
	ListNode* res = sol.reverseKGroup(list, k);

	displayList(res);


	return 0;
}
