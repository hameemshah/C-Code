#include <stdio.h>

int main() {
    char *ptr;
    char str[] = "Hello, World!";

    ptr = str; // ptr points to the first character of the string

    printf("String: %s\n", str);
    printf("Pointer value: %p\n", ptr);
    printf("Character pointed by pointer: %c\n", *ptr);

    return 0;
}

