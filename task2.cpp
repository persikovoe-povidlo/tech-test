#include <iostream>

class D {
    int num;
public:
    void set(int y) {
        num = y;
    }

    void incr(int i) {
        num = num + i;
    }

    void show() {
        std::cout << num;
    }
};

int main() {
    D dob[2], *d;
    dob[0].set(7);
    dob[1].set(9);
    d = &dob[0];
    (++d)->show();
    d->incr(2);
    d->show();
    return 0;
}

