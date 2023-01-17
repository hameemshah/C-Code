#include<stdio.h>
void main () {
	char str[] = "how are you?";
	int i;
	for (i = 0; str[i] != '\0'; ++i);
	printf("The size of string %s is %d", str, i);
}
