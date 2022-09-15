#include <stdio.h>

int main(void) {
    int position = 1;
    position = position + 1;
    position += 1;
    ++position;
    position++;
    //position (+1);
    //1 += position;
    //position := position + 1;
    position += position;
    printf("%d",position);
    return 0;
}
