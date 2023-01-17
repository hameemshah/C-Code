#include<stdio.h>
#include<string.h>
void main () {
	char str1[] = "hi", str2[] = "hello";
	printf("Before copy strings %s  %s\n", str1, str2);
	strcpy(str1, str2);
	printf("After copy strings %s  %s", str1, str2);
}
