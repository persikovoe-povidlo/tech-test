#include <stdio.h>

typedef struct B {
    int a, b, c;
} B;

B sub(B a, B b) {
    B c;
    c.a = a.a - b.a;
    c.b = a.b - b.b;
    return c;
}

int main(void) {
    B a, b;
    a.a = 2;
    a.b = 3;
    b.a = 4;
    b.b = 1;
    B c = sub(a, b);
    printf("%d", c.a + c.b);
    return 0;
}