#include <iostream>

class my_stack {
    static const int MAX_SIZE = 100;
    int stack[MAX_SIZE];
    int size;
public:
    void push(int a) {
        stack[size++] = a;
    }

    int pop() {
        return stack[--size];
    }

    my_stack() {
        size = 0;
    }
};

int main() {
    my_stack st;
    for (int i = 0; i < 8; i++)
        st.push(i);
    std::cout << st.pop();
    st.push(5);
    std::cout << st.pop();
    st.push(3);
    std::cout << st.pop();
    return 0;
}