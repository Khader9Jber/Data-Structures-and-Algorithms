#include <iostream>
#include <vector>
#include "Vector/Vector.h"

#define endl '\n'
using namespace std;

int main() {
    vector<int> vv;

//    Vector<int> v = Vector<int>();
    Vector<int> v(5, 6);
    cout << v.back() << endl;
    cout << v.begin() << endl;
//    show(v);
    return 0;
}