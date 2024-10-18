#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode* leftNode;
	ListNode* rightNode;

	ListNode(int data) {
		val = data;
		leftNode = nullptr;
		rightNode = nullptr;
	}
};

ListNode* insertNode(ListNode* root, int data) {
	if (root == nullptr) {
		return new ListNode(data);
	}

	if (root->val > data) {
		root->leftNode = insertNode(root->leftNode, data);
	}
	else {
		root->rightNode = insertNode(root->rightNode, data);
	}

	return root;
}

void inOrder(ListNode* root) {
	if (root == nullptr) {
		return;
	}

	inOrder(root->leftNode);
	cout << root->val << " ";
	inOrder(root->rightNode);
}
void preOrder(ListNode* root) {
	if (root == nullptr) {
		return;
	}

	cout << root->val << " ";
	preOrder(root->leftNode);
	preOrder(root->rightNode);
}
void postOrder(ListNode* root) {
	if (root == nullptr) {
		return;
	}

	postOrder(root->leftNode);
	postOrder(root->rightNode);
	cout << root->val << " ";
}

int main() {
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	ListNode* root = nullptr;
	for (int i = 0; i < n; i++) {
		root = insertNode(root, v[i]);
	}

	cout << "Inorder: ";
	inOrder(root);
	cout << endl;

	cout << "Preorder: ";
	preOrder(root);
	cout << endl;

	cout << "Postorder: ";
	postOrder(root);
	cout << endl;

	return 0;
}
