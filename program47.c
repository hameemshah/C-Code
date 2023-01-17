#include<stdio.h>
void main() {
	int num, *ptr;
	num = 10;
	printf("The value of num is : %d", num);
	printf("\nThe address of num is : %u", &num);
	ptr = &num;
	printf("\nThe pointer that stores address of num is: %d", ptr);
	printf("\nThe pointer points to: %d", *ptr);
	printf("\nThe address of pointer is : %u", &ptr);
}
