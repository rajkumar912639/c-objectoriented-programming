#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
};

class BinaryTree {
private:
    Node* root;

public:
    BinaryTree() {
        root = NULL;
    }

    void addNode(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->left = NULL;
        newNode->right = NULL;

        if (root == NULL) {
            root = newNode;
        } else {
            insertNode(root, newNode);
        }

        std::cout << "Added " << value << " to the binary tree." << std::endl;
    }

    void insertNode(Node* currentNode, Node* newNode) {
        if (newNode->data < currentNode->data) {
            if (currentNode->left == NULL) {
                currentNode->left = newNode;
            } else {
                insertNode(currentNode->left, newNode);
            }
        } else {
            if (currentNode->right == NULL) {
                currentNode->right = newNode;
            } else {
                insertNode(currentNode->right, newNode);
            }
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
    BinaryTree binaryTree;

    binaryTree.addNode(50);
    binaryTree.addNode(30);
    binaryTree.addNode(70);
    binaryTree.addNode(20);
    binaryTree.addNode(40);
    binaryTree.addNode(60);
    binaryTree.addNode(80);

    binaryTree.printInOrderTraversal();

    return 0;
}

