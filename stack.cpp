#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        std::cout << "Added " << value << " to the stack." << std::endl;
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot perform pop operation." << std::endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        int poppedValue = temp->data;
        delete temp;
        std::cout << "Deleted " << poppedValue << " from the stack." << std::endl;
    }

    bool search(int value) {
        Node* current = top;
        while (current != NULL) {
            if (current->data == value) {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    Stack stack;

   
    stack.push(10);
     stack.push(40);
      stack.push(58);
       stack.push(600);
        stack.push(56);
         stack.push(80);
    
std::cout << "75+{23+(45+(34(45(54))))} ";

    stack.pop();
    stack.pop();

   

    return 0;
}

