#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void check_max_min_val(int* max, int* min, int val) {
    if (val > (*max)) {
        (*max) = val;
    }
    if (val < (*min)) {
        (*min) = val;
    }
}

void inserting_node(Node* &head, Node* &tail, int val) {
    Node* newnode = new Node(val);
    if (head == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void difference(int max, int min, Node* head, Node* tail) {
    if (head == NULL) {
        cout << "0";
        return;
    }
    if (head == tail) {
        cout << "0";
        return;
    }
    int result = max - min;
    cout << result;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int max = INT_MIN;
    int min = INT_MAX;
    
    while (true) {
        int val;
        cin >> val;
        if (val == -1) {
            break;
        }
        check_max_min_val(&max, &min, val);
        inserting_node(head, tail, val);
    }
    difference(max, min, head, tail);
    return 0;
}
