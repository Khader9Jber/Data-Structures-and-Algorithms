#include <iostream>
#include <vector>
#include "Vector/Vector.h"

#define endl '\n'

using namespace std;

template<typename T>
void show(Vector<T> vec) {
    cout << "Capacity: #" << vec.capacity() << " Size: #" << vec.size() << endl;
    string content = "";
    for (int i = 0; i < vec.size(); ++i) {
        content += (to_string(vec[i]) + " ");
    }
    cout << content << endl;
}


int main() {
    vector<int> vv(1);
    vv.front() = 7;
    vv.back() = 6;
    vv.begin();
    vv.end();
    cout << vv.front() << endl;
//   vv.pop_back();
//    vv.pop_back();
//    vv.pop_back();
//    vv.push_back(4);
//
//    vv.at(0) = 3;
//    cout << vv._size() << endl;


//    Vector<int> v = Vector<int>();
    Vector<int> v(5, 6);

    v[4] = 9;
    v.pop_back();
    show(v);

    v.push_back(2);
    show(v);
    v.front() = 1;
    cout << v.back() << endl;
    cout << v.front() << endl;
    cout << v.at(3) << endl;
    cout << v[4] << endl;
    return 0;
}