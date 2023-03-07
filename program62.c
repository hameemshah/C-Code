#include<stdio.h>
#include<string.h>

char * name(char *str) {
    static char greet[20];
    strcpy(greet, "Hello ");
    strcat(greet, str);
    return greet;
}

int main() {
    char Name[20] = "Hameem";
    printf("%s", name(Name));
    return 0;
}

