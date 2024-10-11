#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int num) {
        data = num;
        next = NULL;
    }
};

void insertHead(Node*& head, int newData) { // Pass head by reference
    Node* newNode = new Node(newData);
    newNode->next = head;
    head = newNode; // Update the head to point to the new node
}

void Disp(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl; // Indicate end of the list
}

int main() {
    Node* head = NULL; // Initialize head to NULL
    insertHead(head, 10);
    insertHead(head, 20); // Insert more nodes for testing
    insertHead(head, 30);
    Disp(head); // Display the list
    return 0;
}

/*
30->20->10->NULL
*/
