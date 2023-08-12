#include <iostream>
using namespace std;

// Definition of a node in BST
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Function to insert a new node in BST
Node* insertNode(Node* root, int data)
{
    if (root == NULL) {
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    }
    else {
        root->right = insertNode(root->right, data);
    }

    return root;
}

// Function to perform preorder traversal of BST
void preorderTraversal(Node* root)
{
    if (root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

int main()
{
    Node* root = NULL;

    // Insert elements into BST
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);

    // Print the preorder traversal
    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl;

    return 0;
}

