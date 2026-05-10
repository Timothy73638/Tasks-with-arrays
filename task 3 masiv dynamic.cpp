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
            data[size] = value;
            size++;
        }
        else {
            std::cout << "Вектор переповнений!" << std::endl;
        }
    }

   
    void pop_back() {
        if (size > 0) {
            size--;
        }
    }

   
    void clear() {
        size = 0;
    }

   
    bool is_empty() {
        return size == 0;
    }

   
    void print() {
        if (is_empty()) {
            std::cout << "Вектор порожній" << std::endl;
            return;
        }

        for (int i = 0; i < size; i++) {
            std::cout << data[i] << " ";
        }

        std::cout << std::endl;
    }
};

int main() {
    Vector v;

    
    if (v.is_empty()) {
        std::cout << "Вектор порожній" << std::endl;
    }

   
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    std::cout << "Елементи вектора: ";
    v.print();

   
    v.pop_back();

    std::cout << "Після pop_back(): ";
    v.print();

    
    v.clear();

   
    if (v.is_empty()) {
        std::cout << "Після clear() вектор порожній" << std::endl;
    }

    return 0;
}