#include<stdio.h>
void main() {
	int num, digits;
	printf("Enter the number: ");
	scanf("%d", &num);
	digits = cal_digits(num);
	printf("%d", digits);
}
