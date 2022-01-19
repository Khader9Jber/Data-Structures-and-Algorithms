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

};