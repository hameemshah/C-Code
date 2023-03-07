#include<stdio.h>
int add();
int main() {
	printf("Adding 2 and 5\n");
	add();
	printf("\nNumbers were added");
	return 0;
}
int add() {
	int a = 2, b= 5, sum;
	sum = a + b;
	printf("Sum = %d", sum);
	return 0;
}
