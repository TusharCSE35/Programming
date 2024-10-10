#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void insertValue(node*& head, int val) {
    node* newNode = new node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void displayList(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    int n;
    cin >> n;

    node* list = NULL;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        insertValue(list, x);
    }

    displayList(list);

    return 0;
}
