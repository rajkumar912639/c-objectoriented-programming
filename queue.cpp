#include <iostream>

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = NULL;
        rear = NULL;
    }

    void enqueue(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (rear ==NULL ) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        std::cout << "Added " << value << " to the queue." << std::endl;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot perform dequeue operation." << std::endl;
            return;
        }
        Node* temp = front;
        int dequeuedValue = temp->data;
        front = front->next;
        if (front == NULL) {
            rear = NULL;
        }
        delete temp;
        std::cout << "Deleted " << dequeuedValue << " from the queue." << std::endl;
    }

    bool search(int value) {
        Node* current = front;
        while (current != NULL) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    bool isEmpty() {
        return front == NULL;
    }
};

int main() {
    Queue queue;

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);

    std::cout << "Searching for 20 in the queue: " << (queue.search(20) ? "Found" : "Not found") << std::endl;
    std::cout << "Searching for 50 in the queue: " << (queue.search(50) ? "Found" : "Not found") << std::endl;

    queue.dequeue();
    queue.dequeue();

    std::cout << "Searching for 10 in the queue: " << (queue.search(10) ? "Found" : "Not found") << std::endl;

    return 0;
}

