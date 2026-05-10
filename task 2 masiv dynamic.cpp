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
        else {
            std::cout << "Вектор порожній!" << std::endl;
        }
    }

    
    void clear() {
        size = 0;
    }

   
    void print() {
        if (size == 0) {
            std::cout << "Вектор порожній" << std::endl;
            return;
        }

        for (int i = 0; i < size; i++) {
            std::cout << data[i] << " ";
        }

        std::cout << std::endl;
    }

   
    int getSize() {
        return size;
    }
};

int main() {
    Vector v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    std::cout << "Початковий вектор: ";
    v.print();

    v.pop_back();

    std::cout << "Після pop_back(): ";
    v.print();

    v.clear();

    std::cout << "Після clear(): ";
    v.print();

    return 0;
}