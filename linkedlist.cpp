#include <iostream>

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void addNode(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
        }

        std::cout << "Added " << value << " to the linked list." << std::endl;
    }

    void deleteNode(int value) {
        if (head == NULL) {
            std::cout << "Linked list is empty. Cannot perform delete operation." << std::endl;
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            std::cout << "Deleted " << value << " from the linked list." << std::endl;
            return;
        }

        Node* prev = NULL;
        Node* current = head;

        while (current != NULL && current->data != value) {
            prev = current;
            current = current->next;
        }

        if (current == NULL) {
            std::cout << value << " not found in the linked list." << std::endl;
        } else {
            prev->next = current->next;
            delete current;
            std::cout << "Deleted " << value << " from the linked list." << std::endl;
        }
    }

    bool search(int value) {
        Node* current = head;
        while (current != NULL) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }
};

int main() {
    LinkedList linkedList;

    linkedList.addNode(10);
    linkedList.addNode(20);
    linkedList.addNode(30);
    linkedList.addNode(40);

    std::cout << "Searching for 20 in the linked list: " << (linkedList.search(20) ? "Found" : "Not found") << std::endl;
    std::cout << "Searching for 50 in the linked list: " << (linkedList.search(50) ? "Found" : "Not found") << std::endl;

    linkedList.deleteNode(30);
    linkedList.deleteNode(50);

    std::cout << "Searching for 10 in the linked list: " << (linkedList.search(10) ? "Found" : "Not found") << std::endl;

    return 0;
}

