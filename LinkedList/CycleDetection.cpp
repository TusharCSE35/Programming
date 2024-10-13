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

void makeCycle(ListNode* &head, int pos) {
	ListNode* temp = head;
	ListNode* cycleCrt = nullptr;

	int cnt = 0;
	while (temp->next != nullptr) {
		if (cnt == pos) {
			cycleCrt = temp;
		}
		temp = temp->next;
		cnt++;
	}

	if (cycleCrt != nullptr) {
		temp->next = cycleCrt;
	}
}

class solution {
public:
	bool cycleDetection(ListNode* head) {
		ListNode* slow = head;
		ListNode* fast = head;

		while (fast != nullptr and fast->next != nullptr) {
			slow = slow->next;
			fast = fast->next->next;

			if (fast == slow) {
				return true;
			}
		}

		return false;
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

	int pos;
	cin >> pos;
	makeCycle(list, pos);

	solution sol;
	bool ck = sol.cycleDetection(list);
	if (ck) {
		cout << "There is cycle present" << endl;
	}
	else {
		cout << "There is no cycle present" << endl;
	}

	return 0;
}
