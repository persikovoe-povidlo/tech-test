#include <stdio.h>

long long a;

void f(void);

int main(void) {
    printf("%lld ", a);
    f();
    printf("%lld", a);
    return 0;
}