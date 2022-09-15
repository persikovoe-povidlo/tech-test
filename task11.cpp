#include <iostream>

auto a = '1';
int main() {
    a = '1';
    static_assert(sizeof(a) != 4, "not int");
    std::cout << a << ' ';
    a = '2';
    static_assert(sizeof(a) != 2, "short");
    std::cout << a;
    static_assert(sizeof(a) == 1, "char");
    return 0;
}