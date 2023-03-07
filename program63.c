#include<stdio.h>
#include<string.h>

char * name() {
    static char greet[20] = "Hello ";
    strcat(greet, "Hameem");
    return greet;
}

int main() {
    printf("%s", name());
    return 0;
}

