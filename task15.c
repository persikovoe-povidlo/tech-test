#include <stdio.h>

int main(void) {
    char *s = "Stepan 1996 Katya 1995";
    char name[100];
    int date, offset;
    while (sscanf(s + offset, "%s%d%n", name, &date, &offset) == 2)
        printf("%s%d\n", name, date);
    return 0;
}
