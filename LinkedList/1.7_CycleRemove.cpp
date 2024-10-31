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

void insertList(ListNode* &head, int val) {
	ListNode* newNode = new ListNode(val);

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
	ListNode* removeCycle(ListNode* head) {
		if (head == nullptr) {
			return head;
		}

		ListNode* slow = head;
		ListNode* fast = head;

		bool checkCycle = false;
		while (fast != nullptr and fast->next != nullptr) {
			slow = slow->next;
			fast = fast->next->next;

			if (slow == fast) {
				checkCycle = true;
				break;
			}
		}

		if (!checkCycle) {
			return head;
		}

		fast = head;
		while (fast->next != slow->next) {
			fast = fast->next;
			slow = slow->next;
		}
		slow->next = nullptr;

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

	int pos;
	cin >> pos;
	makeCycle(list, pos);

	solution sol;
	ListNode* res = sol.removeCycle(list);
	displayList(res);

	return 0;
}
