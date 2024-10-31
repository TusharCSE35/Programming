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

bool searchList(Node* head, int target) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == target) {
            return true;
        }
        temp = temp->next;
    }

    return false;
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

    //input for search value
    int x;
    cin >> x;
    bool ck = searchList(list, x);

    if (ck)cout << x << " is valid in the list" << endl;
    else cout << x << " is not valid in the list" << endl;


    return 0;
}
