#include<stdio.h>
void swap(int, int);
void main() {
	int a, b;
	printf("Enter the value of a and b.\n");
	scanf("%d %d", &a, &b);
	swap(a, b);
	printf("Value of a = %d and b = %d in main function after swapping.\n", a, b);
}
void swap(int x, int y){
	x = x + y; // suppose x = 10 and y = 20 then x = 30
	y = x - y; // now y = 30 - 20 = 10 (previously x)
	x = x - y; // similarly x = 30 - 10 = 20 (previously y)
	printf("Value of a = %d and b = %d in swap function.\n", x, y);
}
