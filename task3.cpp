#include <iostream>

using std::cout;
using std::endl;


int main() {
    int b = 32, c = 4;
    int x = 2, y = 3, z;
    bool t;
    cout << (z = x + y) << " " << typeid(z = x + y).name() << endl;
    //cout << typeid(i > 3).name() << endl;
    cout << (b == c) << " " << typeid(b == c).name() << endl;
    cout << !c << " " << typeid(!c).name() << endl;
    cout << (b & c) << " " << typeid(b & c).name() << endl;
    //cout << typeid(i % 3).name() << endl;
    //cout << typeid(i and  3).name() << endl;
    //cout << typeid(i -gt 3).name() << endl;
    return 0;
}