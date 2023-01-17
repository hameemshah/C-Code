#include<stdio.h>
void main() {
	int	num1 = 10, num2 = 20,
	   *ptr1 = &num1, *ptr2 = &num2,
	  	sum = *ptr1 + *ptr2;
	printf("\nThe sum of two numbers is %d", sum);
}
