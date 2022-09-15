#include <iostream>

int main() {
    int min = 24;
    float max = 29.5;
    if (max / min)
        std::cout << max + min << "It's yahoo!\a";
    else
        std::cout << "It's not yahoo! :(\a";
    return 0;
}