#include <stdio.h>

int main() {
    int x = 5;
    int *ptr1;
    int **ptr2;

    ptr1 = &x;
    ptr2 = &ptr1;

    printf("Value of x: %d\n", x);
    printf("Value stored in ptr1: %d\n", *ptr1);
    printf("Value stored in ptr2: %d\n", **ptr2);

    return 0;
}
