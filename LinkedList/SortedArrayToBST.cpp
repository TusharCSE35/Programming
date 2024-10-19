#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* leftNode;
	TreeNode* rightNode;

	TreeNode(int data) {
		val = data;
		leftNode = nullptr;
		rightNode = nullptr;
	}
};

TreeNode* sortedArrayToBST(vector<int>arr, int start, int end) {
	if (start > end) {
		return nullptr;
	}
	int mid = (start + end) / 2;
	TreeNode* root = new TreeNode(arr[mid]);

	root->leftNode = sortedArrayToBST(arr, start, mid - 1);
	root->rightNode = sortedArrayToBST(arr, mid + 1, end);

	return root;
}

vector<vector<int>> displayNodeLevel(TreeNode* root) {
	vector<vector<int>>res;
	if (root == nullptr) {
		return res;
	}

	queue<TreeNode*>q;
	q.push(root);
	while (!q.empty()) {
		int curLen = q.size();
		vector<int>level;

		for (int i = 0; i < curLen; i++) {
			TreeNode* node = q.front();
			q.pop();

			if (node->leftNode != nullptr)q.push(node->leftNode);
			if (node->rightNode != nullptr)q.push(node->rightNode);

			level.push_back(node->val);
		}

		res.push_back(level);
	}

	return res;
}

int main() {
	int n;
	cin >> n;

	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	TreeNode* root = sortedArrayToBST(v, 0, n - 1);
	vector<vector<int>>res = displayNodeLevel(root);

	for (int i = 0; i < res.size(); i++) {
		for (auto it : res[i]) {
			cout << it << " ";
		}
		cout << endl;
	}

	return 0;
}
