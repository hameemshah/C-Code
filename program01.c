#include<stdio.h>
int main() {
	int num1, num2;
	printf("Enter the first and second numbers : ");
	scanf("%d%d", &num1,&num2);
	printf("\nAddition:      %d + %d = %d", num1, num2, num1 + num2);
	printf("\nSubtraction:   %d - %d = %d", num1, num2, num1 - num2);
	printf("\nMultiplication:%d x %d = %d", num1, num2, num1 * num2);
	printf("\nDivision:      %d / %d = %f", num1, num2, (float) num1 / num2);
	return 0;
}
