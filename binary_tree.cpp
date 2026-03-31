#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Insert into BST
Node* insert(Node* root, int value) {
    if (root == NULL) {
        return new Node{value, NULL, NULL};
    }

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

int main() {
    int arr[] = {72,91,85,34,99,10,56,11};

    Node* root = NULL;

    // Build BST
    for (int i = 0; i < 8; i++) {
        root = insert(root, arr[i]);
    }

    cout << "Root node is: " << root->data << endl;

    return 0;
}
