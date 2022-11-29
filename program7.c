#include<stdio.h>
void main() {
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	if (num % 2 == 0) {
		printf("\nThe number you entered is Even.");
	}
	else {
		printf("\nThe number you entered is Odd.");
	}
}
