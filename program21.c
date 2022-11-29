#include<stdio.h>
void main () {
	int num1 = 1, num2 =1, sum = 2;
	printf("%d", num1);
	printf("\n%d", num2);
	while (sum < 100) {
		printf("\n%d", sum);
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
	}
}
