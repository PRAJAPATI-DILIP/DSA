#include<iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Insert at beginning
void insertAtBeginning(Node* &head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;

    if(head != NULL) {
        head->prev = newNode;
    }

    head = newNode;
}

// Display forward
void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout<<"Doubly link list are: " << temp->data << "\n ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 20);
    insertAtBeginning(head, 30);

    //cout << "Doubly Linked List: ";
    display(head);

    return 0;
}