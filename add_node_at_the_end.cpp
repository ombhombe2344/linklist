/*
  Name: om bhombe
  PRN: 23070123039
  Aim: Add node at end
*/
#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int data) {
        value = data;
        next = NULL;
    }
};

void insertAtHead(Node* &head, int value) {
    Node* new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(Node* &head, int value) {
    Node* new_node = new Node(value);
    if (head == NULL) {
        head = new_node;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = new_node;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    insertAtHead(head, 4);
    display(head);
    
    insertAtHead(head, 5);
    display(head);
    
    insertAtTail(head, 3);
    display(head);

    insertAtTail(head, 6);
    display(head);

    return 0;
}
//Output
/*4 NULL
5 4 NULL
5 4 3 NULL
5 4 3 6 NULL*/
