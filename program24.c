#include<stdio.h>
void main () {
	int num, digit, new_num;
	printf("Enter the number: ");
	scanf("%5d");
	while(digit < 10) {
		if (digit > 9) {
			digit = num % 10;
			new_num = digit * 10;	
		}
		else {
			new_num = digit * 10;
		}
	}
	printf("The reverse of number enered is: ");
}
