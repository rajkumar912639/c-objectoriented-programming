#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
};

class BST {
private:
    Node* root;

public:
    BST() {
        root = NULL;
    }

    void insert(int value) {
        root = insertNode(root, value);
    }

    Node* insertNode(Node* currentNode, int value) {
        if (currentNode == NULL) {
            Node* newNode = new Node();
            newNode->data = value;
            newNode->left = NULL;
            newNode->right = NULL;
            return newNode;
        }

        if (value < currentNode->data) {
            currentNode->left = insertNode(currentNode->left, value);
        } else {
            currentNode->right = insertNode(currentNode->right, value);
        }

        return currentNode;
    }

    bool search(int value) {
        return searchNode(root, value);
    }

    bool searchNode(Node* currentNode, int value) {
        if (currentNode == NULL) {
            return false;
        }

        if (currentNode->data == value) {
            return true;
        } else if (value < currentNode->data) {
            return searchNode(currentNode->left, value);
        } else {
            return searchNode(currentNode->right, value);
        }
    }

    void printInOrderTraversal() {
        std::cout << "In-Order Traversal: ";
        inOrderTraversal(root);
        std::cout << std::endl;
    }

    void inOrderTraversal(Node* currentNode) {
        if (currentNode != NULL) {
            inOrderTraversal(currentNode->left);
            std::cout << currentNode->data << " ";
            inOrderTraversal(currentNode->right);
        }
    }
};

int main() {
    BST bst;

    bst.insert(50);
    bst.insert(30);
    bst.insert(70);
    bst.insert(20);
    bst.insert(40);
    bst.insert(60);
    bst.insert(80);

    bst.printInOrderTraversal();

    std::cout << "Searching for 20: " << (bst.search(20) ? "Found" : "Not Found") << std::endl;
    std::cout << "Searching for 90: " << (bst.search(90) ? "Found" : "Not Found") << std::endl;

    return 0;
}

