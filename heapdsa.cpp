#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void heapify(vector<int>& v, int i, int n) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int max = i;
    if (left < n && v[left] > v[max]) {
        max = left;
    }
    if (right < n && v[right] > v[max]) {
        max = right;
    }
    if (max != i) {
        swap(v[i], v[max]);
        heapify(v, max, n);
    }
}
void buildHeap(vector<int>& v) {
    for (int i = v.size() / 2 - 1; i >= 0; --i) {
        heapify(v, i, v.size());
    }
}

void heapSort(vector<int>& v) {
    buildHeap(v);
    for (int i = v.size() - 1; i >= 1; --i) {
        swap(v[0], v[i]);
        heapify(v, 0, i);
    }
}

int main() {
    vector <int> v{3, 5, 7, 1, 4};
    heapSort(v);
    for (auto& x : v) {
        cout << x << " ";
    }
}
