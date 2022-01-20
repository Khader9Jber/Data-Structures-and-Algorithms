#include <iostream>

#define ull unsigned long long
#define endl '\n'
using namespace std;

template<typename T>
class Vector {
private:
    T *data;
    ull size;
    ull capacity;
public:
    /*
   explicit Vector() {
       data = NULL;
       capacity = size = 0;
   } */
    explicit Vector() : data(), size(), capacity() {}

    // __attribute__((unused))
    explicit Vector(ull sz, T default_value = T()) {
        capacity = size = sz;
        data = allocate_memory(capacity);
        for (int i = 0; i < size; ++i) {
            data[i] = default_value;
        }
    }

    ull get_capacity() {
        return capacity;
    }

    ull get_size() {
        return capacity;
    }

    T get_begin() {
        return data[0];
    }

    T get_back() {
        return data[size - 1];
    }

    T* &get_data() {
        return data;
    }

    T &at(ull index) {
        if (index >= size)
            throw invalid_argument("INVALID INDEX");
        return data[index];
    }

    T &operator[](ull index) {
        return data[index];
    }

    void pop_back() {
        // I need to add exception handling if the vector was empty and the programmer tried to pop_back again
        size--;
    }

    void clear() {
        size = 0;
    }

    void push_back(const T &value) {
        if (size < capacity) {
            data[size] = value;
            size++;
        } else {
            capacity *= 2;
            if (capacity == 0) capacity = 1;
            T *temp = allocate_memory(capacity);
            for (int i = 0; i < size; ++i) {
                temp[i] = data[i];
            }
            deallocate_memory(data);
            data = temp;
            data[size++] = value;
        }
    }

private:
    T* allocate_memory(ull cap) {
        return new T[cap];
    }

    void deallocate_memory(T* &memory) {
        delete memory;
    }
};