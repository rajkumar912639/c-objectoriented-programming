#include <iostream>
#include <vector>

class Heap {
private:
    std::vector<int> heap;

public:
    Heap() {}

    void insert(int value) {
        heap.push_back(value);
        siftUp(heap.size() - 1);
    }

    void siftUp(int index) {
        int parentIndex = (index - 1) / 2;
        while (index > 0 && heap[index] > heap[parentIndex]) {
            std::swap(heap[index], heap[parentIndex]);
            index = parentIndex;
            parentIndex = (index - 1) / 2;
        }
    }

    int remove() {
        if (heap.empty()) {
            throw std::out_of_range("Heap is empty");
        }

        int rootValue = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        siftDown(0);
        return rootValue;
    }

    void siftDown(int index) {
        int size = heap.size();
        int leftChildIndex = 2 * index + 1;
        int rightChildIndex = 2 * index + 2;
        int largest = index;

        if (leftChildIndex < size && heap[leftChildIndex] > heap[largest]) {
            largest = leftChildIndex;
        }

        if (rightChildIndex < size && heap[rightChildIndex] > heap[largest]) {
            largest = rightChildIndex;
        }

        if (largest != index) {
            std::swap(heap[index], heap[largest]);
            siftDown(largest);
        }
    }

    void printHeap() {
        std::cout << "Heap: ";
        for (int value : heap) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Heap heap;

    heap.insert(50);
    heap.insert(30);
    heap.insert(70);
    heap.insert(20);
    heap.insert(40);
    heap.insert(60);
    heap.insert(80);

    heap.printHeap();

    int rootValue = heap.remove();
    std::cout << "Removed root value: " << rootValue << std::endl;

    heap.printHeap();

    return 0;
}

