#include <iostream>

class my_perfect_class {
    mutable const int *my_perfect_const;
    int x;
public:
    my_perfect_class() {
        x = 10;
        my_perfect_const = NULL;
    }

    void set_const(int *z) const {
        my_perfect_const = z + 1;
    }

    void print(int y) const {
        std::cout << *my_perfect_const * x / y;
    }
};

int main() {
    const my_perfect_class mpc;
    int array[10];
    for (int i = 0; i < 10; i++)
        array[i] = i;
    mpc.set_const(&array[2]);
    mpc.print(array[2]);
    return 0;
}