#include <iostream>

class Vector {
private:
    int* data;
    int size;
    int capacity;

public:
    Vector(int cap = 10) {
        capacity = cap;
        size = 0;
        data = new int[capacity];
    }

    ~Vector() {
        delete[] data;
    }

    void push_back(int value) {
        if (size < capacity) {
            data[size++] = value;
        }
    }

    void pop_back() {
        if (size > 0) {
            size--;
        }
    }

    void print() {
        for (int i = 0; i < size; i++) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Vector v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v.print();

    v.pop_back();

    v.print();

    return 0;
}