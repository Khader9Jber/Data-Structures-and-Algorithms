#define ull unsigned long long
#define endl '\n'
using namespace std;

template<typename T>
class Vector {
private:
    T *_data;
    ull _size;
    ull _capacity;
public:
    /*
   explicit Vector() {
       _data = NULL;
       _capacity = _size = 0;
   } */
    explicit Vector() : _data(), _size(), _capacity() {}

    explicit Vector(ull sz, T default_value = T()) {
        _capacity = _size = sz;
        _data = allocate_memory(_capacity);
        for (int i = 0; i < _size; ++i) {
            _data[i] = default_value;
        }
    }

    ull capacity() {
        return _capacity;
    }

    ull size() {
        return _size;
    }

    T& front() {
        return _data[0];
    }

    T& back() {
        return _data[_size - 1];
    }

    T *&data() {
        return _data;
    }

    T &at(ull index) {
        if (index >= _size)
            throw invalid_argument("INVALID INDEX");
        return _data[index];
    }

    T &operator[](ull index) {
        return _data[index];
    }

    void pop_back() {
        // I need to add exception handling if the vector was empty and the programmer tried to pop_back again
        _size--;
    }

    void clear() {
        _size = 0;
    }

    void push_back(const T &value) {
        if (_size < _capacity) {
            _data[_size] = value;
            _size++;
        } else {
            _capacity *= 2;
            if (_capacity == 0) _capacity = 1;
            T *temp = allocate_memory(_capacity);
            for (int i = 0; i < _size; ++i) {
                temp[i] = _data[i];
            }
            deallocate_memory(_data);
            _data = temp;
            _data[_size++] = value;
        }
    }

    bool empty() {
        return _size == 0;
    }

private:
    T *allocate_memory(ull cap) {
        return new T[cap];
    }

    void deallocate_memory(T *&memory) {
        delete memory;
    }
};