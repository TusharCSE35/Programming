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

void deleteValue(Node* &head, int val) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    if (head->data == val) {
        Node* hDelete = head;
        head = head->next;

        delete hDelete;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL and temp->next->data != val) {
        temp = temp->next;
    }

    if (temp->next != NULL) {
        Node* valDetele = temp->next;
        temp->next = temp->next->next;
        delete valDetele;
    }
    else {
        cout << "Value is not present in this list" << endl;
    }
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

    //input for delete value
    int val;
    cin >> val;
    deleteValue(list, val);
    displayList(list);

    return 0;
}
