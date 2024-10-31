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
	ListNode* joint = nullptr;

	int count = 0;
	while (temp->next != nullptr) {
		if (count == pos) {
			joint = temp;
		}

		temp = temp->next;
		count++;
	}

	if (joint != nullptr) {
		temp->next = joint;
	}
}

class solution {
public:
	ListNode* cyclePosition(ListNode* head) {
		ListNode* fast = head;
		ListNode* slow = head;

		while (fast != nullptr and fast->next != nullptr) {
			slow = slow->next;
			fast = fast->next->next;

			if (fast == slow) {
				while (head != slow) {
					slow = slow->next;
					head = head->next;
				}
				return head;
			}
		}

		return nullptr;
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
	ListNode* res = sol.cyclePosition(list);
	if (res != nullptr) {
		cout << "Cycle starts at node with value: " << res->val << endl;
	}
	else {
		cout << "No cycle detected in the list." << endl;
	}


	return 0;
}
