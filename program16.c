#include<stdio.h>
void main () {
	int num,sum = 0,i = 1;
	printf("Enter the number: ");
	scanf("%d", &num);
	do {
	if (num % i ==0) {
		sum += i;	
	}	
	++i;
	} while(i <= num/2);
	if (sum == num) {
		printf("The number you entered is a perfect number.");
	}
	else {
		printf("The number is not perfect.");
	}
}
