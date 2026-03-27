#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = NULL;

    // Creating nodes
    Node* first = new Node();
    first->data = 10;

    Node* second = new Node();
    second->data = 20;

    Node* third = new Node();
    third->data = 30;

    // Linking nodes
    first->next = second;
    second->next = third;
    third->next = NULL;

    head = first;

    // Traversal
    Node* temp = head;
    while(temp != NULL) {
        cout <<"The list of sequence are: "<< temp->data << " \n";
        temp = temp->next;
    }
}