#include <iostream>

char x = 'a';

void f1() {
    char x = 'b';
}

void f2() {
    x = 't';
}

int main() {
    f2();
    f1();
    std::cout << x;
    return 0;
}