#include<stdio.h>
void main() {
	int num1, num2;
	printf("Enter the first and second number : ");
	scanf("%d%d", &num1,&num2);
	printf("Greatest = %d", (num1>num2)?num1:num2);
}
