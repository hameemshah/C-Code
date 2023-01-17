#include <stdio.h>

int main() {
    int x = 5;
    int* px = &x; // px is a pointer to an integer, and is assigned the address of x

    printf("x = %d\n", x);
    printf("Address of x: %p\n", &x);
    printf("Value stored in px (i.e., address of x): %p\n", px);
    printf("Value pointed to by px: %d\n", *px);
    printf("Size of the integer pointed to by px: %lu bytes\n", sizeof(*px));
    printf("Scale Factor of pointer px is: %lu\n", sizeof(px));
    return 0;
}
