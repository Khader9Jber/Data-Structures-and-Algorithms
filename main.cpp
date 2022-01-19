#include <iostream>
#include <vector>
#include "Vector/Vector.h"

#define endl '\n'
using namespace std;

int main() {
//    vector<int> vv(1);
//    vv.at(0) = 3;
//    cout << vv [0] << endl;


//    Vector<int> v = Vector<int>();
    Vector<int> v(5, 6);
    v[4] = 9;
    cout << v.get_back() << endl;
    cout << v.get_begin() << endl;
    cout << v.at(3) << endl;
    cout << v[4] << endl;

//    show(v);
    return 0;
}