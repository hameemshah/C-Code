#include<stdio.h>
void main() {
	int a = 10, b = 20;
	printf("Before Swapping:\na = %d\tb = %d", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nAfter Swapping:\na = %d\tb = %d", a, b);
}
