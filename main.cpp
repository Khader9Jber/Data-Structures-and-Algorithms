#include <iostream>
#include <vector>
#include "Vector/Vector.h"

#define endl '\n'
using namespace std;

int main() {
    vector<int> vv;

//    Vector<int> v = Vector<int>();
    Vector<int> v(5, 6);
    cout << v.get_back() << endl;
    cout << v.get_begin() << endl;
//    show(v);
    return 0;
}