#include <iostream>

class my_queue {
    static const int MAX_SIZE = 5;
    int queue[MAX_SIZE];
    int begin, end;
public:
    my_queue() {
        begin = end = 4;
    }

    void push(int a) {
        queue[(end = (end + 1) % MAX_SIZE)] = a;
    }

    int pop() {
        return queue[begin = (begin + 1) % MAX_SIZE];
    }
};

int main() {
    my_queue qu;
    for (int i = 0; i < 29; i++)
        qu.push(i); // 25 26 27 23 24
    for (int i = 0; i < 8; i++) {
        auto a = qu.pop();
        qu.pop();
        qu.push(a);
        std::cout << a << ' ';
    }
}
//25 26 27 28 24
//25
//26~
//25 26 27 25 24
//25-
//27
//25~
//25 26 27 25 27
//25 26 27 25 27
//25 26 25 25 27
//25 26 25 25 25
//25 26 25 25 25
//25 25 25 25 25