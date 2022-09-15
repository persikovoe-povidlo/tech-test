#include <iostream>

int foo(int x, int y) {
    while (y) {
        int f = y;
        y = x % y;
        x = f;
    }
    return x;
}

int main() {
    std::cout << foo(12, 4);
}