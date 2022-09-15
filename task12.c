#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *a, n, i;
    scanf("%d", &n);
    a = calloc(n + 1, sizeof(*a));
    a[0] = a[1] = 1;
    for (i = 2; i <= n; i++)
        a[i] = a[i - 1] + a[i - 2];
    printf("%d", a[n]);
    return 0;
}