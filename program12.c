#include<stdio.h>
void main() {
	int num, ldigit, rev = 0;
	printf("Enter the number: ");
	scanf("%d", &num);
	while(num != 0) {
		ldigit = num % 10;
		rev = rev * 10 + ldigit;
		num /= 10;
	}
	printf("The revers of the number is: %d", rev);
}

