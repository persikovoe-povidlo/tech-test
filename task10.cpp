#include <iostream>

class Student {
    int num;
public:
    Student(int i) {
        num = i;
    }

    void show() {
        std::cout << num;
    }

    ~Student() {
        std::cout << 0;
    }
};

void StudentShow(Student obj) {
    obj.show();
}

int main() {
    Student Smith(111);
    StudentShow(Smith);
    return 0;
}