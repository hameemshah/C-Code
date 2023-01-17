#include<stdio.h>
void swap(int*, int*);
void main() {
	int a, b;
	printf("Enter the value of a and b.\n");
	scanf("%d %d", &a, &b);
	swap(&a, &b);
	printf("Value of a = %d and b = %d in main function after swapping.\n", a, b);
}
void swap(int *x, int *y){
	int *temp = *x;
	*x = *y;
	*y = temp;
}
