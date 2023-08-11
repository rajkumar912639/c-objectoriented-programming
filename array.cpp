#include <iostream>

class Array {
private:
    int* elements;
    int size;
    int capacity;

public:
    Array(int initialCapacity) {
        capacity = initialCapacity;
        size = 0;
        elements = new int[capacity];
    }

    ~Array() {
        delete[] elements;
    }

    void addElement(int value) {
        if (size < capacity) {
            elements[size] = value;
            size++;
            std::cout << "Added " << value << " to the array." << std::endl;
        } else {
            std::cout << "Array is full. Cannot add more elements." << std::endl;
        }
    }

    void deleteElement(int value) {
        int foundIndex = -1;
        for (int i = 0; i < size; i++) {
            if (elements[i] == value) {
                foundIndex = i;
                break;
            }
        }

        if (foundIndex != -1) {
            for (int i = foundIndex; i < size - 1; i++) {
                elements[i] = elements[i + 1];
            }
            size--;
            std::cout << "Deleted " << value << " from the array." << std::endl;
        } else {
            std::cout << value << " not found in the array." << std::endl;
        }
    }

    bool search(int value) {
        for (int i = 0; i < size; i++) {
            if (elements[i] == value) {
                return true;
            }
        }
        return false;
    }
};

int main() {
    Array array(10);

    array.addElement(10);
    array.addElement(20);
    array.addElement(30);
    array.addElement(40);

    std::cout << "Searching for 20 in the array: " << (array.search(20) ? "Found" : "Not found") << std::endl;
    std::cout << "Searching for 50 in the array: " << (array.search(50) ? "Found" : "Not found") << std::endl;

    array.deleteElement(30);
    array.deleteElement(50);

    std::cout << "Searching for 10 in the array: " << (array.search(10) ? "Found" : "Not found") << std::endl;

    return 0;
}

