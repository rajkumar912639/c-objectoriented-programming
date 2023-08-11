#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
private:
    Node* head;

public:
    DoublyLinkedList() {
        head = NULL;
    }

    void addNode(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->prev = NULL;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != NULL) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }

        std::cout << "Added " << value << " to the doubly linked list." << std::endl;
    }

    void deleteNode(int value) {
        if (head == NULL) {
            std::cout << "Doubly linked list is empty. Cannot perform delete operation." << std::endl;
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            if (head != NULL)
                head->prev = NULL;
            delete temp;
            std::cout << "Deleted " << value << " from the doubly linked list." << std::endl;
            return;
        }

        Node* current = head;

        while (current != NULL && current->data != value) {
            current = current->next;
        }

        if (current == NULL) {
            std::cout << value << " not found in the doubly linked list." << std::endl;
        } else {
            current->prev->next = current->next;
            if (current->next != NULL)
                current->next->prev = current->prev;
            delete current;
            std::cout << "Deleted " << value << " from the doubly linked list." << std::endl;
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
    DoublyLinkedList doublyLinkedList;

    doublyLinkedList.addNode(10);
    doublyLinkedList.addNode(20);
    doublyLinkedList.addNode(30);
    doublyLinkedList.addNode(40);

    std::cout << "Searching for 20 in the doubly linked list: " << (doublyLinkedList.search(20) ? "Found" : "Not found") << std::endl;
    std::cout << "Searching for 50 in the doubly linked list: " << (doublyLinkedList.search(50) ? "Found" : "Not found") << std::endl;

    doublyLinkedList.deleteNode(30);
    doublyLinkedList.deleteNode(50);

    std::cout << "Searching for 10 in the doubly linked list: " << (doublyLinkedList.search(10) ? "Found" : "Not found") << std::endl;

    return 0;
}

