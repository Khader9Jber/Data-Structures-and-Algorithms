#include <iostream>
#include <vector>
#include "Vector/Vector.h"

#define endl '\n'

using namespace std;
template <typename T>
void show(Vector<T> vec) {
    cout << "Capacity: #" << vec.get_capacity() << " Size: #" << vec.get_size() << endl;
    string content = "";
    for (int i = 0; i < vec.get_size(); ++i) {
       content += (to_string(vec[i]) + " ") ;
    }
    cout << content << endl;
}


int main() {
    vector<int> vv(1);
//   vv.pop_back();
//    vv.pop_back();
//    vv.pop_back();
//    vv.push_back(4);
//
//    vv.at(0) = 3;
//    cout << vv.size() << endl;


//    Vector<int> v = Vector<int>();
    Vector<int> v(5, 6);

    v[4] = 9;
    v.pop_back();
    show(v);

    v.push_back(2);
    show(v);

    cout << v.get_back() << endl;
    cout << v.get_begin() << endl;
    cout << v.at(3) << endl;
    cout << v[4] << endl;
    return 0;
}