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

void ListInsert(Node*& head, int val) {
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

void headInsert(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

int main() {
    int n;
    cin >> n;

    Node* list = NULL;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        ListInsert(list, x);
    }
    displayList(list);

    //cin for head value insert;
    int x;
    cin >> x;
    headInsert(list, x);
    displayList(list);

    return 0;
}
